#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

csrr x1, mngr2proc < 7
nop
nop
nop
nop
nop
nop
nop
nop
xori x1, x1, 0x0007
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x1 > 0
nop
nop
nop
nop
nop
nop
nop
nop