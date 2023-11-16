section .data
msg db "Hello, Holberton", 0xA ; '0xA' stands for new line
len equ $- msg                 ; Calculate length of message

section .text
global main
extern printf                   ; Import the C function printf

main:
    push rbp                    ; Set up stack frame
    mov rbp, rsp
    sub rsp, 16                 ; Allocate space for locals (none in this program)

    ; Push the parameters in reverse order
    push len
    push msg
    call printf                 ; Call the C function printf

    ; Clean up the stack frame
    mov rsp, rbp
    pop rbp

    ; Return 0 (success)
    xor rax, rax
    ret
