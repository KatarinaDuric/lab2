#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

#provided asm sample (positive numbers)
csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 4
nop
nop
nop
nop
nop
nop
nop
nop
add x3, x1, x2
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

#one negative one positive number
csrr x4, mngr2proc < -5
csrr x5, mngr2proc < 3
nop
nop
nop
nop
nop
nop
nop
nop
add x6, x5, x4
nop
nop
nop
nop
nop
nop
nop
nop
csrw proc2mngr, x6 > -2
nop
nop
nop
nop
nop
nop
nop
nop