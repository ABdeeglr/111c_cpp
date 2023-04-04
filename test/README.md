# README

进行测试的地方


## 1 对字符串数组的指针引用进行汇编测试

使用 `gcc -Og -S <src_file> -fverbose-asm -o <output>` 生成汇编。其中 `-fverbose-asm` 指令能够为汇编添加注释。

以下是同一程序程序生成的汇编代码，但是其中一份有注释。

```asm 
	.file	"ptr_test.c"
# GNU C17 (Ubuntu 11.3.0-1ubuntu1~22.04) version 11.3.0 (x86_64-linux-gnu)
#	compiled by GNU C version 11.3.0, GMP version 6.2.1, MPFR version 4.1.0, MPC version 1.2.1, isl version isl-0.24-GMP

# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed: -mtune=generic -march=x86-64 -Og -fasynchronous-unwind-tables -fstack-protector-strong -fstack-clash-protection -fcf-protection
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64	
	subq	$40, %rsp	#,
	.cfi_def_cfa_offset 48
# ptr_test.c:1: int main(void) {
	movq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp87
	movq	%rax, 24(%rsp)	# tmp87, D.1953
	xorl	%eax, %eax	# tmp87
# ptr_test.c:3: 	char eee[] = "Hello world";
	movabsq	$8031924123371070792, %rax	#, tmp90
	movq	%rax, 12(%rsp)	# tmp90, eee
	movl	$6581362, 20(%rsp)	#, eee
# ptr_test.c:6: }
	movq	24(%rsp), %rax	# D.1953, tmp88
	subq	%fs:40, %rax	# MEM[(<address-space-1> long unsigned int *)40B], tmp88
	jne	.L4	#,
	movl	$0, %eax	#,
	addq	$40, %rsp	#,
	.cfi_remember_state
	.cfi_def_cfa_offset 8
	ret	
.L4:
	.cfi_restore_state
	call	__stack_chk_fail@PLT	#
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
```

```asm
	.file	"ptr_test.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	subq	$40, %rsp
	.cfi_def_cfa_offset 48
	movq	%fs:40, %rax
	movq	%rax, 24(%rsp)
	xorl	%eax, %eax
	movabsq	$8031924123371070792, %rax
	movq	%rax, 12(%rsp)
	movl	$6581362, 20(%rsp)
	movq	24(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L4
	movl	$0, %eax
	addq	$40, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 8
	ret
.L4:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
```
