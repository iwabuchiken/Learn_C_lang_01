	.file	"sub1_p2_invisible_error.c"
	.section .rdata,"dr"
LC0:
	.ascii "x=\0"
LC1:
	.ascii "%d\0"
LC2:
	.ascii "y=\0"
LC3:
	.ascii "max(x, y) = %d\12\0"
	.text
.globl _invisible_error
	.def	_invisible_error;	.scl	2;	.type	32;	.endef
_invisible_error:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$40, %esp
	movl	$LC0, (%esp)
	call	_printf
	leal	-12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	$LC2, (%esp)
	call	_printf
	leal	-16(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	-16(%ebp), %eax
	movl	-12(%ebp), %edx
	cmpl	%edx, %eax
	jge	L2
	movl	%edx, %eax
L2:
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	leave
	ret
	.def	___main;	.scl	2;	.type	32;	.endef
.globl _main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	call	___main
	call	_invisible_error
	movl	$0, %eax
	leave
	ret
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
