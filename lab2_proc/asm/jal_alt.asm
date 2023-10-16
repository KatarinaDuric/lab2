#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

csrr x1, mngr2proc < 5
nop
nop
nop
nop
nop
nop
nop
nop
jal x2, 0x0008
addi x1, x1, 0x0002
addi x1, x1, 0x0003
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x1 > 8
nop
nop
nop
nop
nop
nop
nop
nop