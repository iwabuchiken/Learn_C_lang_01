	.file	"sub2_sizeof_long_short.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC2:
	.ascii "sizeof(ln_n1)=%d(%%d)\12\0"
LC3:
	.ascii "sizeof(sh_n2)=%d(%%d)\12\0"
LC4:
	.ascii "sizeof(db_n3)=%d(%%d)\12\0"
LC5:
	.ascii "sizeof(fl_n4)=%d(%%d)\12\0"
	.text
.globl _main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$48, %esp
	call	___main
	movl	$100, 44(%esp)
	movw	$10, 42(%esp)
	movl	$-1717986918, %eax
	movl	$1074502041, %edx
	movl	%eax, 32(%esp)
	movl	%edx, 36(%esp)
	movl	$0x40133333, %eax
	movl	%eax, 28(%esp)
	movl	$4, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$2, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	$8, 4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	movl	$4, 4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	ret
	.def	_printf;	.scl	2;	.type	32;	.endef
