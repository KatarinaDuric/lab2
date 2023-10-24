#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

#provided asm sample (positive numbers) test
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

#one negative one positive number test
csrr x4, mngr2proc < -5
csrr x5, mngr2proc < 3
add x6, x5, x4
csrw proc2mngr, x6 > -2

#overflow 1 test
csrr x13, mngr2proc < 2147483647
csrr x14, mngr2proc < 268435455
add x15, x14, x13
csrw proc2mngr, x15 > 2415919102

#overflow 2 - two negative numbers to get a zero test
csrr x16, mngr2proc < 2147483648
csrr x17, mngr2proc < 2147483648
add x18, x17, x16
csrw proc2mngr, x18 > 0

#overflow 3 - two negative numbers to get a positive number test
csrr x19, mngr2proc < 2147483648
csrr x20, mngr2proc < 2147483649
add x21, x20, x19
csrw proc2mngr, x21 > 1