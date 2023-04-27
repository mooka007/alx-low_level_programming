section .data
    message: db 'Hello, Holberton', 0
    format: db '%s', 10, 0

section .text
    global main

main:
    ; call printf with message and format
    mov rdi, format
    mov rsi, message
    xor eax, eax
    call printf

    ; exit program
    xor eax, eax
    ret
