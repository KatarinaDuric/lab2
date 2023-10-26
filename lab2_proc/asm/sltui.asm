#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

# set the address where you want this
# code segment

#Set if less than 0
   xor x3, x3, x3
   csrr x1, mngr2proc < 3
   sltiu x3, x1, 0
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_a(x1)

#Test 1: Set if less than largest imm
   xor x3, x3, x3
   csrr x1, mngr2proc < 3
   sltiu x3, x1, 0xFFF
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_b(x1)
#Test 2: Compare zero to number
   csrr x1, mngr2proc < 0
   sltiu x3, x1, 45
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_c(x1)


   #data section
   .data
   label_a:
   .word 5000
   label_b:
   .word 5000
   label_c:
   .word 5000



