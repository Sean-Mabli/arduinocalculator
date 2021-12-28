instr = input('expression: ').lower().strip().replace(' ', '')

def emdas(input):
  while input.count('^') > 0:
    input = input[:input.index('^') - 1] + [str(float(input[input.index('^') - 1]) ** float(input[input.index('^') + 1]))] + input[input.index('^') + 2:]

  while input.count('*') > 0 or input.count('/') > 0:
    if input.count('/') == 0 or (input.count('*') > 0 and input.index('*') < input.index('/')):
      input = input[:input.index('*') - 1] + [str(float(input[input.index('*') - 1]) * float(input[input.index('*') + 1]))] + input[input.index('*') + 2:]
    elif input.count('*') == 0 or (input.count('/') > 0 and input.index('/') < input.index('*')):
      input = input[:input.index('/') - 1] + [str(float(input[input.index('/') - 1]) / float(input[input.index('/') + 1]))] + input[input.index('/') + 2:]

  while input.count('+') > 0 or input.count('-') > 0:
    if input.count('-') == 0 or (input.count('+') > 0 and input.index('+') < input.index('-')):
      input = input[:input.index('+') - 1] + [str(float(input[input.index('+') - 1]) + float(input[input.index('+') + 1]))] + input[input.index('+') + 2:]
    elif input.count('+') == 0 or (input.count('-') > 0 and input.index('-') < input.index('+')):
      input = input[:input.index('-') - 1] + [str(float(input[input.index('-') - 1]) - float(input[input.index('-') + 1]))] + input[input.index('-') + 2:]

  return float(input[0])

input = []
for letter in instr:
  if letter in ['+', '-', '*', '/', '^', '(', ')']:
    if instr[: instr.find(letter)] != '':
      input.append(instr[: instr.find(letter)])
    input.append(letter)
    instr = instr[instr.find(letter) + 1 : ]
input.append(instr)

while input.count('(') > 0:
  input = input[: len(input) - input[::-1].index('(') - 1] + [str(emdas(input[len(input) - input[::-1].index('(') : input.index(')')]))] + input[input.index(')') + 1:]

print(emdas(input))