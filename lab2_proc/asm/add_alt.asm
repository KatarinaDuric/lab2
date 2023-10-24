#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

#provided sample code
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
csrw proc2mngr, x1 > 9
nop
nop
nop
nop
nop
nop
nop
nop

# negative numbers
csrr x1, mngr2proc < -5
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
csrw proc2mngr, x1 > -1
nop
nop
nop
nop
nop
nop
nop
nop