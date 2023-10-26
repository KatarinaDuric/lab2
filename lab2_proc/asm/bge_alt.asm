#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

#Equal values
csrr x1, mngr2proc < -7
csrr x2, mngr2proc < -7
bge  x1, x2, label_c
addi x1, x1, 0x0002
addi x1, x1, 0x0003
nop
nop
label_c:
csrw proc2mngr, x1 > -7

#Neg verses pos


#Pos versus neg

#Boundary test: Largest pos number compared to number
#Boundary test: Number compared to largest pos number
#Boundary test: Smallest neg number comared to number
#Boundary test: Number compared to smallest neg number