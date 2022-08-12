	.file	"101-hello_holberton.c"
	.intel_syntax noprefix
	.text
.Ltext0:
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB11:
	.file 1 "101-hello_holberton.c"
	.loc 1 3 1 view -0
	.cfi_startproc
	.loc 1 4 5 view .LVU1
	.loc 1 3 1 is_stmt 0 view .LVU2
	sub	rsp, 40
	.cfi_def_cfa_offset 48
	.loc 1 4 10 view .LVU3
	movdqa	xmm0, XMMWORD PTR .LC0[rip]
	mov	eax, 10
	.loc 1 5 5 view .LVU4
	mov	rdi, rsp
	.loc 1 4 10 view .LVU5
	mov	WORD PTR 16[rsp], ax
	.loc 1 5 5 is_stmt 1 view .LVU6
	.loc 1 4 10 is_stmt 0 view .LVU7
	movups	XMMWORD PTR [rsp], xmm0
	.loc 1 5 5 view .LVU8
	call	puts@PLT
.LVL0:
	.loc 1 6 5 is_stmt 1 view .LVU9
	.loc 1 7 1 is_stmt 0 view .LVU10
	xor	eax, eax
	add	rsp, 40
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE11:
	.size	main, .-main
	.section	.rodata.cst16,"aM",@progbits,16
	.align 16
.LC0:
	.quad	5197202827057587528
	.quad	7957707101262998639
	.text
.Letext0:
	.file 2 "<built-in>"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.long	0xc6
	.value	0x4
	.long	.Ldebug_abbrev0
	.byte	0x8
	.uleb128 0x1
	.long	.LASF8
	.byte	0xc
	.long	.LASF9
	.long	.LASF10
	.long	.Ldebug_ranges0+0
	.quad	0
	.long	.Ldebug_line0
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.long	.LASF0
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.long	.LASF1
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.long	.LASF2
	.uleb128 0x2
	.byte	0x2
	.byte	0x7
	.long	.LASF3
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.long	.LASF4
	.uleb128 0x2
	.byte	0x2
	.byte	0x5
	.long	.LASF5
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.long	.LASF6
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.long	.LASF7
	.uleb128 0x4
	.long	.LASF11
	.byte	0x1
	.byte	0x2
	.byte	0x5
	.long	0x53
	.quad	.LFB11
	.quad	.LFE11-.LFB11
	.uleb128 0x1
	.byte	0x9c
	.long	0xae
	.uleb128 0x5
	.string	"msg"
	.byte	0x1
	.byte	0x4
	.byte	0xa
	.long	0xae
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x6
	.quad	.LVL0
	.long	0xbe
	.uleb128 0x7
	.uleb128 0x1
	.byte	0x55
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.byte	0
	.byte	0
	.uleb128 0x8
	.long	0x61
	.long	0xbe
	.uleb128 0x9
	.long	0x29
	.byte	0x11
	.byte	0
	.uleb128 0xa
	.long	.LASF12
	.long	.LASF13
	.byte	0x2
	.byte	0
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x4109
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x31
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x410a
	.byte	0
	.uleb128 0x2
	.uleb128 0x18
	.uleb128 0x2111
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x6e
	.uleb128 0xe
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.long	0x2c
	.value	0x2
	.long	.Ldebug_info0
	.byte	0x8
	.byte	0
	.value	0
	.value	0
	.quad	.LFB11
	.quad	.LFE11-.LFB11
	.quad	0
	.quad	0
	.section	.debug_ranges,"",@progbits
.Ldebug_ranges0:
	.quad	.LFB11
	.quad	.LFE11
	.quad	0
	.quad	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF1:
	.string	"unsigned int"
.LASF12:
	.string	"puts"
.LASF13:
	.string	"__builtin_puts"
.LASF0:
	.string	"long unsigned int"
.LASF9:
	.string	"101-hello_holberton.c"
.LASF2:
	.string	"unsigned char"
.LASF11:
	.string	"main"
.LASF6:
	.string	"long int"
.LASF3:
	.string	"short unsigned int"
.LASF4:
	.string	"signed char"
.LASF10:
	.string	"/home/Garfield/ALX/alx-low_level_programming/0x12-singly_linked_lists"
.LASF5:
	.string	"short int"
.LASF8:
	.string	"GNU C17 10.2.1 20210110 -masm=intel -mtune=generic -march=x86-64 -g -O4 -fasynchronous-unwind-tables"
.LASF7:
	.string	"char"
	.ident	"GCC: (Debian 10.2.1-6) 10.2.1 20210110"
	.section	.note.GNU-stack,"",@progbits
