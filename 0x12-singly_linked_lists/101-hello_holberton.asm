section .text
global main

main:
mov	rax, 1
mov	rdi, 1
mov	rsi, hello
mov	rdx, len
syscall

mov	rax, 60
xor	rdi, rdi
syscall

hello 	db "Hello, Holberton", 10
len	equ $ - hello
