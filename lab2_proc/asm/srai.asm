#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

# set the address where you want this
# code segment

#Test 0: Shift by 0
   csrr x1, mngr2proc < 34
   srai x3, x1, 0
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_a(x1)

#Test 1: Shift -1 by 30
   csrr x1, mngr2proc < 4294967295
   srai x3, x1, 30
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_b(x1)
#Test 2: Shift -1 by 31
   csrr x1, mngr2proc < 4294967295
   srai x3, x1, 31
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_c(x1)
#Test 3: Shift the number 0
   csrr x1, mngr2proc < 0
   srai x3, x1, 15
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
   

