		section .text
		global _ft_write


_ft_write:
					mov			rat, 0x20000004
					syscall
					ret
