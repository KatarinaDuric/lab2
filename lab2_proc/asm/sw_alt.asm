#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

xor x1, x1, x1
xor x2, x2, x2
xor x3, x3, x3
addi x1, x1, 0x0004
addi x2, x2, 0x0007
sw x2, label_a(x1)
lw x3, label_a(x1)
nop
nop
nop
csrw proc2mngr x3 > 7
nop
label_a:
nop