.subsections_via_symbols

.text
.align 2

.global _write
_write:
    mov x16, #4
    svc #0x80
    ret
