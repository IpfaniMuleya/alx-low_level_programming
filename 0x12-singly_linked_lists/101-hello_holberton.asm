global main

extern printf

section .data
	message db "Hello, Holberton", 10

section .text
main:
	push rbp
	mov rbp, rsp

	; call printf with the address of the string to print
	mov rdi, message
	xor eax, eax
	call printf

	mov rsp, rbp
	pop rbp
	ret
