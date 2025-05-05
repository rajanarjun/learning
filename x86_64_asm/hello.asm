;; NASM x86_64 assembley "hello world"

;; data section definition
section .data
    ;; string 'msg' variable with value 'hello world'
    msg db "Hello World!"
    newline db 0x0A

;; text section definition
section .text
    ;; entry point for the linker, global so it is visible to the linker
    global _start

;; program entry point definition
_start:
    
    mov rax, 1
    mov rdi, 1
    mov rsi, msg
    mov rdx, 12
    syscall

    mov rax, 1
    mov rdi, 1
    mov rsi, newline
    mov rdx, 1
    syscall

    mov rax, 60
    mov rdi, 0
    syscall
