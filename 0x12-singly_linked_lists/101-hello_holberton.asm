section .data
msg db "Hello, Holberton", 0xA ; C string to be printed

section .text
global main
extern printf ; we are using the C function printf

main:
    ; we push the message to the stack
    ; because printf requires the parameters in a certain order
    push rbp ; push base pointer onto the stack
    mov rdi, msg ; load address of message into rdi
    call printf ; call C function

    ; exit the program
    pop rbp ; pop the base pointer off the stack
    mov rax, 60 ; 60 is the syscall number for exit on x86_64
    xor rdi, rdi ; set rdi to 0
    syscall ; call the kernel
