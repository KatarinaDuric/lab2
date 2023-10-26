#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

#provided asm sample (positive numbers) test
csrr x1, mngr2proc < 5
addi x3, x1, 4
csrw proc2mngr, x3 > 9

#one negative one positive number test
csrr x4, mngr2proc < -5
addi x6, x4, 3
csrw proc2mngr, x6 > -2

#overflow 1 test
csrr x13, mngr2proc < 2147483647
addi x15, x13, 1
csrw proc2mngr, x15 > 2147483648

#overflow 2 - two negative numbers to get a positive number test
csrr x16, mngr2proc < 2147483648
addi x18, x16, 0xFFF
csrw proc2mngr, x18 > 2147483647
