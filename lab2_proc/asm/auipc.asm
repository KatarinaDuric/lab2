#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

# set the address where you want this
# code segment

#Test 0: Pos offset
   auipc x3, 0x200 
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_a(x1)

#Test 1: Zero reg edge case
   auipc x0, 0x1001
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x0,  label_b(x1)

#Test 2: Neg offset
   auipc x3, 0xF00 
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_c(x1)

#Test 3: Zero offset
   auipc x3, 0x000 
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_d(x1)
   
   #data section
   .data
   label_a:
   .word 5000
   label_b:
   .word 5000
   label_c:
   .word 5000
   label_d:
   .word 5000


