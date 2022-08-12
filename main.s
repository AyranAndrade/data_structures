	.file	"main.cpp"
	.text
	.section	.text._ZNSt7__cxx119to_stringEi,"axG",@progbits,_ZNSt7__cxx119to_stringEi,comdat
	.weak	_ZNSt7__cxx119to_stringEi
	.type	_ZNSt7__cxx119to_stringEi, @function
_ZNSt7__cxx119to_stringEi:
.LFB1139:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1139
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -56(%rbp)
	movl	%esi, -60(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movl	-60(%rbp), %eax
	shrl	$31, %eax
	movb	%al, -33(%rbp)
	cmpb	$0, -33(%rbp)
	je	.L2
	movl	-60(%rbp), %eax
	negl	%eax
	jmp	.L3
.L2:
	movl	-60(%rbp), %eax
.L3:
	movl	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl	$10, %esi
	movl	%eax, %edi
	call	_ZNSt8__detail14__to_chars_lenIjEEjT_i
	movl	%eax, -28(%rbp)
	leaq	-34(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev@PLT
	movzbl	-33(%rbp), %edx
	movl	-28(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, %esi
	leaq	-34(%rbp), %rdx
	movq	-56(%rbp), %rax
	movq	%rdx, %rcx
	movl	$45, %edx
	movq	%rax, %rdi
.LEHB0:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEmcRKS3_
.LEHE0:
	leaq	-34(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev@PLT
	movzbl	-33(%rbp), %edx
	movq	-56(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB1:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm@PLT
.LEHE1:
	movq	%rax, %rcx
	movl	-32(%rbp), %edx
	movl	-28(%rbp), %eax
	movl	%eax, %esi
	movq	%rcx, %rdi
	call	_ZNSt8__detail18__to_chars_10_implIjEEvPcjT_
	nop
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L7
	jmp	.L10
.L8:
	endbr64
	movq	%rax, %rbx
	leaq	-34(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev@PLT
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB2:
	call	_Unwind_Resume@PLT
.L9:
	endbr64
	movq	%rax, %rbx
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	movq	%rbx, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume@PLT
.LEHE2:
.L10:
	call	__stack_chk_fail@PLT
.L7:
	movq	-56(%rbp), %rax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1139:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table._ZNSt7__cxx119to_stringEi,"aG",@progbits,_ZNSt7__cxx119to_stringEi,comdat
.LLSDA1139:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1139-.LLSDACSB1139
.LLSDACSB1139:
	.uleb128 .LEHB0-.LFB1139
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L8-.LFB1139
	.uleb128 0
	.uleb128 .LEHB1-.LFB1139
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L9-.LFB1139
	.uleb128 0
	.uleb128 .LEHB2-.LFB1139
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE1139:
	.section	.text._ZNSt7__cxx119to_stringEi,"axG",@progbits,_ZNSt7__cxx119to_stringEi,comdat
	.size	_ZNSt7__cxx119to_stringEi, .-_ZNSt7__cxx119to_stringEi
	.section	.text._ZNSt8__detail14__to_chars_lenIjEEjT_i,"axG",@progbits,_ZNSt8__detail14__to_chars_lenIjEEjT_i,comdat
	.weak	_ZNSt8__detail14__to_chars_lenIjEEjT_i
	.type	_ZNSt8__detail14__to_chars_lenIjEEjT_i, @function
_ZNSt8__detail14__to_chars_lenIjEEjT_i:
.LFB1141:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -36(%rbp)
	movl	%esi, -40(%rbp)
	movl	$1, -20(%rbp)
	movl	-40(%rbp), %eax
	imull	%eax, %eax
	movl	%eax, -16(%rbp)
	movl	-40(%rbp), %eax
	movl	-16(%rbp), %edx
	imull	%edx, %eax
	movl	%eax, -12(%rbp)
	movl	-40(%rbp), %eax
	imull	-12(%rbp), %eax
	movl	%eax, %eax
	movq	%rax, -8(%rbp)
.L17:
	movl	-40(%rbp), %eax
	cmpl	%eax, -36(%rbp)
	jnb	.L12
	movl	-20(%rbp), %eax
	jmp	.L13
.L12:
	movl	-36(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jnb	.L14
	movl	-20(%rbp), %eax
	addl	$1, %eax
	jmp	.L13
.L14:
	movl	-36(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jnb	.L15
	movl	-20(%rbp), %eax
	addl	$2, %eax
	jmp	.L13
.L15:
	movl	-36(%rbp), %eax
	cmpq	%rax, -8(%rbp)
	jbe	.L16
	movl	-20(%rbp), %eax
	addl	$3, %eax
	jmp	.L13
.L16:
	movl	-36(%rbp), %eax
	movl	$0, %edx
	divq	-8(%rbp)
	movl	%eax, -36(%rbp)
	addl	$4, -20(%rbp)
	jmp	.L17
.L13:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1141:
	.size	_ZNSt8__detail14__to_chars_lenIjEEjT_i, .-_ZNSt8__detail14__to_chars_lenIjEEjT_i
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZN7ListSetIiEC2Ev,"axG",@progbits,_ZN7ListSetIiEC5Ev,comdat
	.align 2
	.weak	_ZN7ListSetIiEC2Ev
	.type	_ZN7ListSetIiEC2Ev, @function
_ZN7ListSetIiEC2Ev:
.LFB1754:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4ListIiEC1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1754:
	.size	_ZN7ListSetIiEC2Ev, .-_ZN7ListSetIiEC2Ev
	.weak	_ZN7ListSetIiEC1Ev
	.set	_ZN7ListSetIiEC1Ev,_ZN7ListSetIiEC2Ev
	.section	.rodata
.LC0:
	.string	"Contains 4: "
.LC1:
	.string	"Contains 2: "
.LC2:
	.string	"Contains 1: "
.LC3:
	.string	"2 was removed."
	.align 8
.LC4:
	.string	"I tried to remove 5 from set: "
	.text
	.globl	main
	.type	main, @function
main:
.LFB1752:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1752
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
.LEHB3:
	call	_ZN7ListSetIiEC1Ev
	leaq	-48(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	_ZN7ListSetIiE3addEi
	leaq	-48(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	_ZN7ListSetIiE3addEi
	leaq	-48(%rbp), %rax
	movl	$3, %esi
	movq	%rax, %rdi
	call	_ZN7ListSetIiE3addEi
	leaq	-48(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	_ZN7ListSetIiE3addEi
	leaq	-48(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	_ZN7ListSetIiE3addEi
	subq	$8, %rsp
	pushq	-32(%rbp)
	pushq	-40(%rbp)
	pushq	-48(%rbp)
	call	_Z9print_allIiEv7ListSetIT_E
	addq	$32, %rsp
	leaq	.LC0(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-48(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	_ZN7ListSetIiE8containsEi
	movzbl	%al, %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEb@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-48(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	_ZN7ListSetIiE8containsEi
	movzbl	%al, %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEb@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	.LC2(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-48(%rbp), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	_ZN7ListSetIiE8containsEi
	movzbl	%al, %eax
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEb@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	-48(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	_ZN7ListSetIiE6removeEi
	subq	$8, %rsp
	pushq	-32(%rbp)
	pushq	-40(%rbp)
	pushq	-48(%rbp)
	call	_Z9print_allIiEv7ListSetIT_E
	addq	$32, %rsp
	leaq	.LC3(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
.LEHE3:
	leaq	-48(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
.LEHB4:
	call	_ZN7ListSetIiE6removeEi
.LEHE4:
.L23:
	movl	$0, %eax
	movq	-24(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L25
	jmp	.L28
.L26:
	endbr64
	cmpq	$1, %rdx
	je	.L22
	movq	%rax, %rdi
.LEHB5:
	call	_Unwind_Resume@PLT
.LEHE5:
.L22:
	movq	%rax, %rdi
	call	__cxa_begin_catch@PLT
	movq	%rax, -56(%rbp)
	leaq	.LC4(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
.LEHB6:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	movq	-56(%rbp), %rax
	movq	(%rax), %rax
	addq	$16, %rax
	movq	(%rax), %rdx
	movq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	*%rdx
	movq	%rax, %rsi
	movq	%rbx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
.LEHE6:
	call	__cxa_end_catch@PLT
	jmp	.L23
.L27:
	endbr64
	movq	%rax, %rbx
	call	__cxa_end_catch@PLT
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB7:
	call	_Unwind_Resume@PLT
.LEHE7:
.L28:
	call	__stack_chk_fail@PLT
.L25:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1752:
	.section	.gcc_except_table,"a",@progbits
	.align 4
.LLSDA1752:
	.byte	0xff
	.byte	0x9b
	.uleb128 .LLSDATT1752-.LLSDATTD1752
.LLSDATTD1752:
	.byte	0x1
	.uleb128 .LLSDACSE1752-.LLSDACSB1752
.LLSDACSB1752:
	.uleb128 .LEHB3-.LFB1752
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB4-.LFB1752
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L26-.LFB1752
	.uleb128 0x1
	.uleb128 .LEHB5-.LFB1752
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB6-.LFB1752
	.uleb128 .LEHE6-.LEHB6
	.uleb128 .L27-.LFB1752
	.uleb128 0
	.uleb128 .LEHB7-.LFB1752
	.uleb128 .LEHE7-.LEHB7
	.uleb128 0
	.uleb128 0
.LLSDACSE1752:
	.byte	0x1
	.byte	0
	.align 4
	.long	DW.ref._ZTISt16invalid_argument-.
.LLSDATT1752:
	.text
	.size	main, .-main
	.section	.text._ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev,"axG",@progbits,_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD5Ev,comdat
	.align 2
	.weak	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
	.type	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev, @function
_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev:
.LFB1864:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED2Ev@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1864:
	.size	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev, .-_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
	.weak	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD1Ev
	.set	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD1Ev,_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD2Ev
	.section	.text._ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEmcRKS3_,"axG",@progbits,_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC5IS3_EEmcRKS3_,comdat
	.align 2
	.weak	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEmcRKS3_
	.type	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEmcRKS3_, @function
_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEmcRKS3_:
.LFB1866:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1866
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	%edx, %eax
	movq	%rcx, -48(%rbp)
	movb	%al, -36(%rbp)
	movq	-24(%rbp), %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
.LEHB8:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv@PLT
	movq	%rax, %rcx
	movq	-48(%rbp), %rax
	movq	%rax, %rdx
	movq	%rcx, %rsi
	movq	%rbx, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC1EPcRKS3_@PLT
.LEHE8:
	movsbl	-36(%rbp), %edx
	movq	-32(%rbp), %rcx
	movq	-24(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB9:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructEmc@PLT
.LEHE9:
	jmp	.L33
.L32:
	endbr64
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB10:
	call	_Unwind_Resume@PLT
.LEHE10:
.L33:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1866:
	.section	.gcc_except_table
.LLSDA1866:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1866-.LLSDACSB1866
.LLSDACSB1866:
	.uleb128 .LEHB8-.LFB1866
	.uleb128 .LEHE8-.LEHB8
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB9-.LFB1866
	.uleb128 .LEHE9-.LEHB9
	.uleb128 .L32-.LFB1866
	.uleb128 0
	.uleb128 .LEHB10-.LFB1866
	.uleb128 .LEHE10-.LEHB10
	.uleb128 0
	.uleb128 0
.LLSDACSE1866:
	.section	.text._ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEmcRKS3_,"axG",@progbits,_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC5IS3_EEmcRKS3_,comdat
	.size	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEmcRKS3_, .-_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEmcRKS3_
	.weak	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEmcRKS3_
	.set	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEmcRKS3_,_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC2IS3_EEmcRKS3_
	.weak	_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits
	.section	.rodata._ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits,"aG",@progbits,_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits,comdat
	.align 32
	.type	_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits, @gnu_unique_object
	.size	_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits, 201
_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits:
	.string	"00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
	.section	.text._ZNSt8__detail18__to_chars_10_implIjEEvPcjT_,"axG",@progbits,_ZNSt8__detail18__to_chars_10_implIjEEvPcjT_,comdat
	.weak	_ZNSt8__detail18__to_chars_10_implIjEEvPcjT_
	.type	_ZNSt8__detail18__to_chars_10_implIjEEvPcjT_, @function
_ZNSt8__detail18__to_chars_10_implIjEEvPcjT_:
.LFB1872:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	%edx, -32(%rbp)
	movl	-28(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -12(%rbp)
	jmp	.L35
.L36:
	movl	-32(%rbp), %edx
	movl	%edx, %eax
	imulq	$1374389535, %rax, %rax
	shrq	$32, %rax
	shrl	$5, %eax
	imull	$100, %eax, %ecx
	movl	%edx, %eax
	subl	%ecx, %eax
	addl	%eax, %eax
	movl	%eax, -4(%rbp)
	movl	-32(%rbp), %eax
	movl	%eax, %eax
	imulq	$1374389535, %rax, %rax
	shrq	$32, %rax
	shrl	$5, %eax
	movl	%eax, -32(%rbp)
	movl	-4(%rbp), %eax
	leal	1(%rax), %ecx
	movl	-12(%rbp), %edx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	%ecx, %ecx
	leaq	_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits(%rip), %rax
	movzbl	(%rcx,%rax), %eax
	movb	%al, (%rdx)
	movl	-12(%rbp), %eax
	subl	$1, %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	-4(%rbp), %eax
	leaq	_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits(%rip), %rcx
	movzbl	(%rax,%rcx), %eax
	movb	%al, (%rdx)
	subl	$2, -12(%rbp)
.L35:
	cmpl	$99, -32(%rbp)
	ja	.L36
	cmpl	$9, -32(%rbp)
	jbe	.L37
	movl	-32(%rbp), %eax
	addl	%eax, %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %eax
	leal	1(%rax), %ecx
	movq	-24(%rbp), %rax
	leaq	1(%rax), %rdx
	movl	%ecx, %ecx
	leaq	_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits(%rip), %rax
	movzbl	(%rcx,%rax), %eax
	movb	%al, (%rdx)
	movl	-8(%rbp), %eax
	leaq	_ZZNSt8__detail18__to_chars_10_implIjEEvPcjT_E8__digits(%rip), %rdx
	movzbl	(%rax,%rdx), %edx
	movq	-24(%rbp), %rax
	movb	%dl, (%rax)
	jmp	.L39
.L37:
	movl	-32(%rbp), %eax
	addl	$48, %eax
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movb	%dl, (%rax)
.L39:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1872:
	.size	_ZNSt8__detail18__to_chars_10_implIjEEvPcjT_, .-_ZNSt8__detail18__to_chars_10_implIjEEvPcjT_
	.section	.text._ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_OS8_,"axG",@progbits,_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_OS8_,comdat
	.weak	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_OS8_
	.type	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_OS8_, @function
_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_OS8_:
.LFB2013:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-16(%rbp), %rdx
	movq	-24(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6insertEmPKc@PLT
	movq	%rax, %rdi
	call	_ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EOS4_@PLT
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2013:
	.size	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_OS8_, .-_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_OS8_
	.section	.text._ZN4ListIiEC2Ev,"axG",@progbits,_ZN4ListIiEC5Ev,comdat
	.align 2
	.weak	_ZN4ListIiEC2Ev
	.type	_ZN4ListIiEC2Ev, @function
_ZN4ListIiEC2Ev:
.LFB2017:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$40, %edi
	call	_Znam@PLT
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movl	$10, 8(%rax)
	movq	-8(%rbp), %rax
	movl	8(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 12(%rax)
	movq	-8(%rbp), %rax
	movl	$0, 16(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2017:
	.size	_ZN4ListIiEC2Ev, .-_ZN4ListIiEC2Ev
	.weak	_ZN4ListIiEC1Ev
	.set	_ZN4ListIiEC1Ev,_ZN4ListIiEC2Ev
	.section	.text._ZN7ListSetIiE3addEi,"axG",@progbits,_ZN7ListSetIiE3addEi,comdat
	.align 2
	.weak	_ZN7ListSetIiE3addEi
	.type	_ZN7ListSetIiE3addEi, @function
_ZN7ListSetIiE3addEi:
.LFB2019:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	-12(%rbp), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN7ListSetIiE8containsEi
	xorl	$1, %eax
	testb	%al, %al
	je	.L45
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN4ListIiE6appendEi
.L45:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2019:
	.size	_ZN7ListSetIiE3addEi, .-_ZN7ListSetIiE3addEi
	.section	.rodata
.LC5:
	.string	"Size: "
	.section	.text._Z9print_allIiEv7ListSetIT_E,"axG",@progbits,_Z9print_allIiEv7ListSetIT_E,comdat
	.weak	_Z9print_allIiEv7ListSetIT_E
	.type	_Z9print_allIiEv7ListSetIT_E, @function
_Z9print_allIiEv7ListSetIT_E:
.LFB2020:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	.LC5(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	16(%rbp), %rdi
	call	_ZN7ListSetIiE4sizeEv
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_ZNSolsEi@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	-48(%rbp), %rax
	leaq	16(%rbp), %rsi
	movq	%rax, %rdi
	call	_ZN7ListSetIiE7get_allEv
	movl	$0, -52(%rbp)
	jmp	.L47
.L48:
	movl	-52(%rbp), %edx
	leaq	-48(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN4ListIiE3getEi
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSolsEi@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	addl	$1, -52(%rbp)
.L47:
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4ListIiE4sizeEv
	cmpl	%eax, -52(%rbp)
	setl	%al
	testb	%al, %al
	jne	.L48
	nop
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L49
	call	__stack_chk_fail@PLT
.L49:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2020:
	.size	_Z9print_allIiEv7ListSetIT_E, .-_Z9print_allIiEv7ListSetIT_E
	.section	.text._ZN7ListSetIiE8containsEi,"axG",@progbits,_ZN7ListSetIiE8containsEi,comdat
	.align 2
	.weak	_ZN7ListSetIiE8containsEi
	.type	_ZN7ListSetIiE8containsEi, @function
_ZN7ListSetIiE8containsEi:
.LFB2022:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN4ListIiE8containsEi
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2022:
	.size	_ZN7ListSetIiE8containsEi, .-_ZN7ListSetIiE8containsEi
	.section	.text._ZN7ListSetIiE6removeEi,"axG",@progbits,_ZN7ListSetIiE6removeEi,comdat
	.align 2
	.weak	_ZN7ListSetIiE6removeEi
	.type	_ZN7ListSetIiE6removeEi, @function
_ZN7ListSetIiE6removeEi:
.LFB2026:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movq	-24(%rbp), %rax
	movl	-28(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN4ListIiE8index_ofEi
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movl	-4(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZN4ListIiE6removeEi
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2026:
	.size	_ZN7ListSetIiE6removeEi, .-_ZN7ListSetIiE6removeEi
	.section	.text._ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_,"axG",@progbits,_ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_,comdat
	.weak	_ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_
	.type	_ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_, @function
_ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_:
.LFB2101:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2101:
	.size	_ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_, .-_ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_
	.section	.text._ZN4ListIiE6appendEi,"axG",@progbits,_ZN4ListIiE6appendEi,comdat
	.align 2
	.weak	_ZN4ListIiE6appendEi
	.type	_ZN4ListIiE6appendEi, @function
_ZN4ListIiE6appendEi:
.LFB2104:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4ListIiE19resize_if_necessaryEv
	movq	-8(%rbp), %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	cltq
	salq	$2, %rax
	addq	%rax, %rdx
	movl	-12(%rbp), %eax
	movl	%eax, (%rdx)
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	leal	1(%rax), %edx
	movq	-8(%rbp), %rax
	movl	%edx, 16(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2104:
	.size	_ZN4ListIiE6appendEi, .-_ZN4ListIiE6appendEi
	.section	.text._ZN7ListSetIiE4sizeEv,"axG",@progbits,_ZN7ListSetIiE4sizeEv,comdat
	.align 2
	.weak	_ZN7ListSetIiE4sizeEv
	.type	_ZN7ListSetIiE4sizeEv, @function
_ZN7ListSetIiE4sizeEv:
.LFB2105:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4ListIiE4sizeEv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2105:
	.size	_ZN7ListSetIiE4sizeEv, .-_ZN7ListSetIiE4sizeEv
	.section	.text._ZN7ListSetIiE7get_allEv,"axG",@progbits,_ZN7ListSetIiE7get_allEv,comdat
	.align 2
	.weak	_ZN7ListSetIiE7get_allEv
	.type	_ZN7ListSetIiE7get_allEv, @function
_ZN7ListSetIiE7get_allEv:
.LFB2106:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rcx
	movq	-16(%rbp), %rsi
	movq	(%rsi), %rax
	movq	8(%rsi), %rdx
	movq	%rax, (%rcx)
	movq	%rdx, 8(%rcx)
	movq	16(%rsi), %rax
	movq	%rax, 16(%rcx)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2106:
	.size	_ZN7ListSetIiE7get_allEv, .-_ZN7ListSetIiE7get_allEv
	.section	.text._ZN4ListIiE4sizeEv,"axG",@progbits,_ZN4ListIiE4sizeEv,comdat
	.align 2
	.weak	_ZN4ListIiE4sizeEv
	.type	_ZN4ListIiE4sizeEv, @function
_ZN4ListIiE4sizeEv:
.LFB2107:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	16(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2107:
	.size	_ZN4ListIiE4sizeEv, .-_ZN4ListIiE4sizeEv
	.section	.rodata
.LC6:
	.string	"Index: "
.LC7:
	.string	" "
	.align 8
.LC8:
	.string	"First index possible: 0 Last index possible: "
.LC9:
	.string	"List is empty."
	.section	.text._ZN4ListIiE3getEi,"axG",@progbits,_ZN4ListIiE3getEi,comdat
	.align 2
	.weak	_ZN4ListIiE3getEi
	.type	_ZN4ListIiE3getEi, @function
_ZN4ListIiE3getEi:
.LFB2108:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA2108
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	addq	$-128, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -136(%rbp)
	movl	%esi, -140(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	cmpl	$0, -140(%rbp)
	js	.L63
	movq	-136(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, -140(%rbp)
	jge	.L63
	movq	-136(%rbp), %rax
	movq	(%rax), %rdx
	movl	-140(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movq	-24(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L73
	jmp	.L80
.L63:
	leaq	-96(%rbp), %rax
	movl	-140(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
.LEHB11:
	call	_ZNSt7__cxx119to_stringEi
.LEHE11:
	leaq	-64(%rbp), %rax
	leaq	-96(%rbp), %rdx
	leaq	.LC6(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB12:
	call	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_OS8_
.LEHE12:
	leaq	-128(%rbp), %rax
	leaq	-64(%rbp), %rcx
	leaq	.LC7(%rip), %rdx
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB13:
	call	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_
.LEHE13:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	movq	-136(%rbp), %rax
	movl	16(%rax), %eax
	testl	%eax, %eax
	jle	.L65
	movq	-136(%rbp), %rax
	movl	16(%rax), %eax
	leal	-1(%rax), %edx
	leaq	-96(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
.LEHB14:
	call	_ZNSt7__cxx119to_stringEi
.LEHE14:
	leaq	-64(%rbp), %rax
	leaq	-96(%rbp), %rdx
	leaq	.LC8(%rip), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB15:
	call	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEPKS5_OS8_
.LEHE15:
	leaq	-64(%rbp), %rdx
	leaq	-128(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB16:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendERKS4_@PLT
.LEHE16:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L66
.L65:
	leaq	-128(%rbp), %rax
	leaq	.LC9(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB17:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc@PLT
.LEHE17:
.L66:
	movl	$16, %edi
	call	__cxa_allocate_exception@PLT
	movq	%rax, %rbx
	leaq	-128(%rbp), %rax
	movq	%rax, %rsi
	movq	%rbx, %rdi
.LEHB18:
	call	_ZNSt12out_of_rangeC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE@PLT
.LEHE18:
	movq	_ZNSt12out_of_rangeD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdx
	leaq	_ZTISt12out_of_range(%rip), %rax
	movq	%rax, %rsi
	movq	%rbx, %rdi
.LEHB19:
	call	__cxa_throw@PLT
.LEHE19:
.L75:
	endbr64
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L68
.L74:
	endbr64
	movq	%rax, %rbx
.L68:
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB20:
	call	_Unwind_Resume@PLT
.L78:
	endbr64
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L70
.L77:
	endbr64
	movq	%rax, %rbx
.L70:
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L71
.L79:
	endbr64
	movq	%rax, %r12
	movq	%rbx, %rdi
	call	__cxa_free_exception@PLT
	movq	%r12, %rbx
	jmp	.L71
.L76:
	endbr64
	movq	%rax, %rbx
.L71:
	leaq	-128(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	movq	%rbx, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume@PLT
.LEHE20:
.L80:
	call	__stack_chk_fail@PLT
.L73:
	subq	$-128, %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2108:
	.section	.gcc_except_table
.LLSDA2108:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2108-.LLSDACSB2108
.LLSDACSB2108:
	.uleb128 .LEHB11-.LFB2108
	.uleb128 .LEHE11-.LEHB11
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB12-.LFB2108
	.uleb128 .LEHE12-.LEHB12
	.uleb128 .L74-.LFB2108
	.uleb128 0
	.uleb128 .LEHB13-.LFB2108
	.uleb128 .LEHE13-.LEHB13
	.uleb128 .L75-.LFB2108
	.uleb128 0
	.uleb128 .LEHB14-.LFB2108
	.uleb128 .LEHE14-.LEHB14
	.uleb128 .L76-.LFB2108
	.uleb128 0
	.uleb128 .LEHB15-.LFB2108
	.uleb128 .LEHE15-.LEHB15
	.uleb128 .L77-.LFB2108
	.uleb128 0
	.uleb128 .LEHB16-.LFB2108
	.uleb128 .LEHE16-.LEHB16
	.uleb128 .L78-.LFB2108
	.uleb128 0
	.uleb128 .LEHB17-.LFB2108
	.uleb128 .LEHE17-.LEHB17
	.uleb128 .L76-.LFB2108
	.uleb128 0
	.uleb128 .LEHB18-.LFB2108
	.uleb128 .LEHE18-.LEHB18
	.uleb128 .L79-.LFB2108
	.uleb128 0
	.uleb128 .LEHB19-.LFB2108
	.uleb128 .LEHE19-.LEHB19
	.uleb128 .L76-.LFB2108
	.uleb128 0
	.uleb128 .LEHB20-.LFB2108
	.uleb128 .LEHE20-.LEHB20
	.uleb128 0
	.uleb128 0
.LLSDACSE2108:
	.section	.text._ZN4ListIiE3getEi,"axG",@progbits,_ZN4ListIiE3getEi,comdat
	.size	_ZN4ListIiE3getEi, .-_ZN4ListIiE3getEi
	.section	.text._ZN4ListIiE8containsEi,"axG",@progbits,_ZN4ListIiE8containsEi,comdat
	.align 2
	.weak	_ZN4ListIiE8containsEi
	.type	_ZN4ListIiE8containsEi, @function
_ZN4ListIiE8containsEi:
.LFB2110:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L82
.L85:
	movq	-24(%rbp), %rax
	movq	(%rax), %rdx
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, -28(%rbp)
	jne	.L83
	movl	$1, %eax
	jmp	.L84
.L83:
	addl	$1, -4(%rbp)
.L82:
	movq	-24(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L85
	movl	$0, %eax
.L84:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2110:
	.size	_ZN4ListIiE8containsEi, .-_ZN4ListIiE8containsEi
	.section	.rodata
.LC10:
	.string	" not exists in list."
	.section	.text._ZN4ListIiE8index_ofEi,"axG",@progbits,_ZN4ListIiE8index_ofEi,comdat
	.align 2
	.weak	_ZN4ListIiE8index_ofEi
	.type	_ZN4ListIiE8index_ofEi, @function
_ZN4ListIiE8index_ofEi:
.LFB2113:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA2113
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$112, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -120(%rbp)
	movl	%esi, -124(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movl	$0, -100(%rbp)
	jmp	.L87
.L90:
	movq	-120(%rbp), %rax
	movq	(%rax), %rdx
	movl	-100(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, -124(%rbp)
	jne	.L88
	movl	-100(%rbp), %eax
	movq	-24(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L94
	jmp	.L98
.L88:
	addl	$1, -100(%rbp)
.L87:
	movq	-120(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, -100(%rbp)
	jl	.L90
	movl	$16, %edi
	call	__cxa_allocate_exception@PLT
	movq	%rax, %rbx
	leaq	-96(%rbp), %rax
	movl	-124(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
.LEHB21:
	call	_ZNSt7__cxx119to_stringEi
.LEHE21:
	leaq	-64(%rbp), %rax
	leaq	-96(%rbp), %rcx
	leaq	.LC10(%rip), %rdx
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB22:
	call	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_
.LEHE22:
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	movq	%rbx, %rdi
.LEHB23:
	call	_ZNSt16invalid_argumentC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE@PLT
.LEHE23:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	movq	_ZNSt16invalid_argumentD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdx
	leaq	_ZTISt16invalid_argument(%rip), %rax
	movq	%rax, %rsi
	movq	%rbx, %rdi
.LEHB24:
	call	__cxa_throw@PLT
.L97:
	endbr64
	movq	%rax, %r12
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L92
.L96:
	endbr64
	movq	%rax, %r12
.L92:
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L93
.L95:
	endbr64
	movq	%rax, %r12
.L93:
	movq	%rbx, %rdi
	call	__cxa_free_exception@PLT
	movq	%r12, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume@PLT
.LEHE24:
.L98:
	call	__stack_chk_fail@PLT
.L94:
	addq	$112, %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2113:
	.section	.gcc_except_table
.LLSDA2113:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2113-.LLSDACSB2113
.LLSDACSB2113:
	.uleb128 .LEHB21-.LFB2113
	.uleb128 .LEHE21-.LEHB21
	.uleb128 .L95-.LFB2113
	.uleb128 0
	.uleb128 .LEHB22-.LFB2113
	.uleb128 .LEHE22-.LEHB22
	.uleb128 .L96-.LFB2113
	.uleb128 0
	.uleb128 .LEHB23-.LFB2113
	.uleb128 .LEHE23-.LEHB23
	.uleb128 .L97-.LFB2113
	.uleb128 0
	.uleb128 .LEHB24-.LFB2113
	.uleb128 .LEHE24-.LEHB24
	.uleb128 0
	.uleb128 0
.LLSDACSE2113:
	.section	.text._ZN4ListIiE8index_ofEi,"axG",@progbits,_ZN4ListIiE8index_ofEi,comdat
	.size	_ZN4ListIiE8index_ofEi, .-_ZN4ListIiE8index_ofEi
	.section	.text._ZN4ListIiE6removeEi,"axG",@progbits,_ZN4ListIiE6removeEi,comdat
	.align 2
	.weak	_ZN4ListIiE6removeEi
	.type	_ZN4ListIiE6removeEi, @function
_ZN4ListIiE6removeEi:
.LFB2114:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA2114
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$112, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%rdi, -120(%rbp)
	movl	%esi, -124(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	cmpl	$0, -124(%rbp)
	js	.L100
	movq	-120(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, -124(%rbp)
	jge	.L100
	movq	-120(%rbp), %rax
	movl	16(%rax), %eax
	subl	$1, %eax
	cmpl	%eax, -124(%rbp)
	jge	.L101
	movl	-124(%rbp), %eax
	movl	%eax, -100(%rbp)
	jmp	.L102
.L103:
	movq	-120(%rbp), %rax
	movq	(%rax), %rdx
	movl	-100(%rbp), %eax
	cltq
	addq	$1, %rax
	salq	$2, %rax
	leaq	(%rdx,%rax), %rcx
	movq	-120(%rbp), %rax
	movq	(%rax), %rdx
	movl	-100(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rax, %rdx
	movl	(%rcx), %eax
	movl	%eax, (%rdx)
	addl	$1, -100(%rbp)
.L102:
	movq	-120(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, -100(%rbp)
	jl	.L103
.L101:
	movq	-120(%rbp), %rax
	movl	16(%rax), %eax
	leal	-1(%rax), %edx
	movq	-120(%rbp), %rax
	movl	%edx, 16(%rax)
	nop
	nop
	movq	-24(%rbp), %rax
	subq	%fs:40, %rax
	je	.L108
	jmp	.L112
.L100:
	movl	$16, %edi
	call	__cxa_allocate_exception@PLT
	movq	%rax, %rbx
	leaq	-96(%rbp), %rax
	movl	-124(%rbp), %edx
	movl	%edx, %esi
	movq	%rax, %rdi
.LEHB25:
	call	_ZNSt7__cxx119to_stringEi
.LEHE25:
	leaq	-64(%rbp), %rax
	leaq	-96(%rbp), %rcx
	leaq	.LC10(%rip), %rdx
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB26:
	call	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_
.LEHE26:
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	movq	%rbx, %rdi
.LEHB27:
	call	_ZNSt12out_of_rangeC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE@PLT
.LEHE27:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	movq	_ZNSt12out_of_rangeD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdx
	leaq	_ZTISt12out_of_range(%rip), %rax
	movq	%rax, %rsi
	movq	%rbx, %rdi
.LEHB28:
	call	__cxa_throw@PLT
.L111:
	endbr64
	movq	%rax, %r12
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L106
.L110:
	endbr64
	movq	%rax, %r12
.L106:
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L107
.L109:
	endbr64
	movq	%rax, %r12
.L107:
	movq	%rbx, %rdi
	call	__cxa_free_exception@PLT
	movq	%r12, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume@PLT
.LEHE28:
.L112:
	call	__stack_chk_fail@PLT
.L108:
	addq	$112, %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2114:
	.section	.gcc_except_table
.LLSDA2114:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2114-.LLSDACSB2114
.LLSDACSB2114:
	.uleb128 .LEHB25-.LFB2114
	.uleb128 .LEHE25-.LEHB25
	.uleb128 .L109-.LFB2114
	.uleb128 0
	.uleb128 .LEHB26-.LFB2114
	.uleb128 .LEHE26-.LEHB26
	.uleb128 .L110-.LFB2114
	.uleb128 0
	.uleb128 .LEHB27-.LFB2114
	.uleb128 .LEHE27-.LEHB27
	.uleb128 .L111-.LFB2114
	.uleb128 0
	.uleb128 .LEHB28-.LFB2114
	.uleb128 .LEHE28-.LEHB28
	.uleb128 0
	.uleb128 0
.LLSDACSE2114:
	.section	.text._ZN4ListIiE6removeEi,"axG",@progbits,_ZN4ListIiE6removeEi,comdat
	.size	_ZN4ListIiE6removeEi, .-_ZN4ListIiE6removeEi
	.section	.text._ZN4ListIiE19resize_if_necessaryEv,"axG",@progbits,_ZN4ListIiE19resize_if_necessaryEv,comdat
	.align 2
	.weak	_ZN4ListIiE19resize_if_necessaryEv
	.type	_ZN4ListIiE19resize_if_necessaryEv, @function
_ZN4ListIiE19resize_if_necessaryEv:
.LFB2149:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movl	16(%rax), %edx
	movq	-24(%rbp), %rax
	movl	12(%rax), %eax
	cmpl	%eax, %edx
	jl	.L120
	movq	-24(%rbp), %rax
	movl	12(%rax), %eax
	leal	10(%rax), %edx
	movq	-24(%rbp), %rax
	movl	%edx, 12(%rax)
	movq	-24(%rbp), %rax
	movl	12(%rax), %eax
	cltq
	movabsq	$2305843009213693950, %rdx
	cmpq	%rdx, %rax
	ja	.L115
	salq	$2, %rax
	movq	%rax, %rdi
	call	_Znam@PLT
	movq	%rax, -8(%rbp)
	movl	$0, -12(%rbp)
	jmp	.L117
.L115:
	call	__cxa_throw_bad_array_new_length@PLT
.L118:
	movq	-24(%rbp), %rax
	movq	(%rax), %rdx
	movl	-12(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	movq	-8(%rbp), %rdx
	addq	%rcx, %rdx
	movl	(%rax), %eax
	movl	%eax, (%rdx)
	addl	$1, -12(%rbp)
.L117:
	movq	-24(%rbp), %rax
	movl	16(%rax), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L118
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L119
	movl	$4, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
.L119:
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, (%rax)
.L120:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2149:
	.size	_ZN4ListIiE19resize_if_necessaryEv, .-_ZN4ListIiE19resize_if_necessaryEv
	.section	.text._ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_,"axG",@progbits,_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_,comdat
	.weak	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_
	.type	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_, @function
_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_:
.LFB2150:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendEPKc@PLT
	movq	%rax, %rdi
	call	_ZSt4moveIRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEONSt16remove_referenceIT_E4typeEOS8_
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EOS4_@PLT
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2150:
	.size	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_, .-_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EEOS8_PKS5_
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2276:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L125
	cmpl	$65535, -8(%rbp)
	jne	.L125
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rax
	movq	%rax, %rdx
	leaq	_ZStL8__ioinit(%rip), %rax
	movq	%rax, %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L125:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2276:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB2277:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2277:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	DW.ref._ZTISt16invalid_argument
	.weak	DW.ref._ZTISt16invalid_argument
	.section	.data.rel.local.DW.ref._ZTISt16invalid_argument,"awG",@progbits,DW.ref._ZTISt16invalid_argument,comdat
	.align 8
	.type	DW.ref._ZTISt16invalid_argument, @object
	.size	DW.ref._ZTISt16invalid_argument, 8
DW.ref._ZTISt16invalid_argument:
	.quad	_ZTISt16invalid_argument
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 11.2.0-7ubuntu2) 11.2.0"
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
