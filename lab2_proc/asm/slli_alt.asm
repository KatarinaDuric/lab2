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
slli x1, x1, 0x0001
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x1 > 14
nop
nop
nop
nop
nop
nop
nop
nop