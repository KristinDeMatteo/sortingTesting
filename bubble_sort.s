.text
.global _bubbleSort
_bubbleSort:
    push %ebp
    mov %esp, %ebp
    push %ebx
    push %esi
    push %edi

    mov 12(%ebp), %ecx  # size -> ecx
    dec %ecx            # size -= 1

outer_loop:
    mov %ecx, %edi      # i = size - 1
inner_loop:
    xor %eax, %eax      # j = 0
    mov 8(%ebp), %ebx   # arr -> ebx
    mov (%ebx, %eax, 4), %esi
    mov 4(%ebx, %eax, 4), %edx
    cmp %esi, %edx
    jle no_swap

    # Swap elements
    mov %esi, (%ebx, %eax, 4)
    mov %edx, 4(%ebx, %eax, 4)

no_swap:
    inc %eax            # j++
    cmp %eax, %edi
    jl inner_loop       # if j < i, loop

    dec %edi            # i--
    jnz outer_loop

    pop %edi
    pop %esi
    pop %ebx
    pop %ebp
    ret
