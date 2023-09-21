global main

section .text
main:
  ; Move the string "Hello, Holberton" to the rdi register.
  mov rdi, message

  ; Call the printf function.
  call printf

  ; Exit the program.
  mov rax, 60
  xor rdi, rdi
  syscall

section .data
message: db "Hello, Holberton\n", 0
