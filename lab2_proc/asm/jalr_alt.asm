#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 552
nop
nop
nop
nop
nop
nop
nop
nop
jalr x3, x2, 0x0008
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