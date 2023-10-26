#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

# set the address where you want this
# code segment

#Test 0: Compare number to 0
   csrr x1, mngr2proc < 9
   csrr x2, mngr2proc < 0
   sltu x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_a(x1)

#Test 1: Compare zero to number
   csrr x1, mngr2proc < 0
   csrr x2, mngr2proc < 5
   sltu x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_b(x1)
#Test 2: Compare number to largest number
   csrr x1, mngr2proc < 45
   csrr x2, mngr2proc < 4294967295
   sltu x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_c(x1)
#Test 3: Compare largest pos number to any number
   csrr x1, mngr2proc < 4294967295
   csrr x2, mngr2proc < 648
   sltu x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_d(x1)
#Test 4: Random test
   csrr x1, mngr2proc < 45
   csrr x2, mngr2proc < 83
   sltu x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_e(x1)


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
   label_e:
   .word 5000



