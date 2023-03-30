//
//  function.s
//  matrix
//
//  Created by Amor Wang on 3/27/23.
//

.bss
.lcomm buffer, 100              # buffer to hold user input

.globl _getInput
.align 2

_getInput:
  pushq %rbp
  movq %rsp, %rbp
  movq %rdi, %rax               # buffer address
  movl %esi, %edx               # buffer size
  movl $0x2000003, %eax         # read system call
  movl $0, %ebx                 # stdin file descriptor
  syscall
  popq %rbp
  ret
