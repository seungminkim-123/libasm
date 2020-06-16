				section .text
				global _ft_strcmp

_ft_strcmp:								; s1 = rdi , s2 = rsi
				xor		rcx, rcx		; i = 0
				xor		rdx, rdx		; cmp = 0
				cmp		rdi, 0
				jz		check_null
				cmp		rsi, 0
				jz		check_null
				jmp		check
check_null:
				cmp		rdi, rsi
				jz		equal			;s1 == s2
				jg		superior		;s1 == NULL
				jmp		inferior		;s2 == NULL
compare:
				mov		dl, BYTE[rsi + rcx]
				cmp		BYTE[rdi + rcx], dl
				jne		last_char
increase:
				inc		rcx
check:
				cmp		BYTE[rdi + rcx], 0
				je		last_char
				cmp		BYTE[rsi + rcx], 0
				je		last_char
				jmp		compare
last_char:
				mov		dl, BYTE [rdi + rcx]
				sub		dl, BYTE [rsi + rcx]
				cmp		dl, 0
				je		equal
				jl		inferior
superior:
				mov		rax, 1
				ret
inferior:
				mov		rax, -1
				ret
equal:
				mov		rax, 0
				ret
