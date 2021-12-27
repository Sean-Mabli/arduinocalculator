section	.text
  global _start
	
_start:
  mov al, [num1]

  add al, [num2]
  add	al, 0x30
  mov [sum], al

  mov	ax, 4
  mov	ecx, sum
  mov	edx, 1
  int	0x80

  mov	eax, 1
  int	0x80

section .data
  num1 db 4
  num2 db 3

segment .bss
  sum resb 1