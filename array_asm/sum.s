.global sum_asm		

sum_asm:
	xor %eax, %eax
loop:
	sub $1, %esi
	add (%rdi, %rsi, 4), %eax
	test %rsi, %rsi
	jne loop
	ret
