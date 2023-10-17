#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

csrr x1, mngr2proc < 5
csrr x2, mngr2proc < 5
nop
nop
nop
nop
nop
nop
nop
nop
beq  x1, x2, label_c
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
label_c:
csrw proc2mngr, x1 > 5
nop
nop
nop
nop
nop
nop
nop
nop