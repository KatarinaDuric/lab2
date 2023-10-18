#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

xor x1, x1, x1
xor x2, x2, x2
xor x3, x3, x3
lui x1, 2
addi x2, x2, 0x0007
sw x2, label_a(x1)
lw x3, label_a(x1)
nop
nop
nop
csrw proc2mngr x3 > 7
nop
#data section
.data
label_a:
.word 5000