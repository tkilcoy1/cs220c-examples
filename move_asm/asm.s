.global mov_asm
	
mov_asm:
	mov %rdi, %rax
	xor %rdx, %rdx
	mov (%rax),%edx	
	mov (%rax,%rdx,4),%ecx
	lea (%rax,%rdx,4),%rsi
	ret
