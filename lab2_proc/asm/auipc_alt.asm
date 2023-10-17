#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

xor x1, x1, x1
xor x2, x2, x2
xor x3, x3, x3
auipc x1, 0
jalr x2, x1, 16
addi x3, x3, 1
addi x3, x3, 2
addi x3, x3, 3
nop
nop
nop
csrw proc2mngr x3 > 3
nop
