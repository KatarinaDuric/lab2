#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 7
bltu  x1, x2, label_c
addi x1, x1, 0x0002
addi x1, x1, 0x0003
nop
nop
label_c:
csrw proc2mngr, x1 > 5

#Edge case: negative greater than positive 
csrr x1, mngr2proc < -5
csrr x2, mngr2proc < 7
bltu  x1, x2, label_a
addi x1, x1, 0x0002
addi x1, x1, 0x0003
nop
nop
label_a:
csrw proc2mngr, x1 > 0
