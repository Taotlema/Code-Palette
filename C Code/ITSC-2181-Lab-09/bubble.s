	.file	"bubble.c"
	.text
	.p2align 4
	.globl	bubble_sort
	.type	bubble_sort, @function
bubble_sort:
.LFB0:
	.cfi_startproc
	leal	-1(%rsi), %r8d
	testl	%r8d, %r8d
	jle	.L1
	movslq	%r8d, %rax
	leaq	(%rdi,%rax,4), %rsi
	.p2align 4,,10
	.p2align 3
.L3:
	movq	%rdi, %rax
	testl	%r8d, %r8d
	jle	.L18
	.p2align 4,,10
	.p2align 3
.L5:
	movq	(%rax), %xmm0
	pshufd	$0xe5, %xmm0, %xmm1
	movd	%xmm0, %edx
	movd	%xmm1, %ecx
	cmpl	%edx, %ecx
	jge	.L4
	pshufd	$225, %xmm0, %xmm0
	movq	%xmm0, (%rax)
.L4:
	addq	$4, %rax
	cmpq	%rsi, %rax
	jne	.L5
	subq	$4, %rsi
	subl	$1, %r8d
	jne	.L3
.L1:
	ret
	.p2align 4,,10
	.p2align 3
.L18:
	subl	$1, %r8d
	subq	$4, %rsi
	jmp	.L3
	.cfi_endproc
.LFE0:
	.size	bubble_sort, .-bubble_sort
	.ident	"GCC: (GNU) 13.2.0"
	.section	.note.GNU-stack,"",@progbits
