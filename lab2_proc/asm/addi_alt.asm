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
addi x1, x1, 0x0004
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x3 > 9
nop
nop
nop
nop
nop
nop
nop
nop