input = '213432/1*1231*43274/4324' # input('expression: ').lower().strip().replace(' ', '')

def joinit(iterable, delimiter):
  it = iter(iterable)
  yield next(it)
  for x in it:
    yield delimiter
    yield x

def seprate(instr):
  input = [instr]
  for i in ['+', '-', '*', '/']:
    out = []
    for j in input:
      w = joinit(j.split(i), i)
      out.extend(w)
    input = out
  return out

input = seprate(input)

while input.index('*') == -1 and input.index('/') == -1:
  if 
  input = input[:input.index('*') - 1] + [str(int(input[input.index('*') - 1]) * int(input[input.index('*') + 1]))] + input[input.index('*') + 2:]
print(input)