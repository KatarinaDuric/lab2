#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

# set the address where you want this
# code segment

#Test 0: Or with 0
   xor x1, x1, x1
   xori x1, x1, 0x0200
   or x3, x1, x0
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_a(x1)

#Test 1: Or with all 1s
   csrr x1, mngr2proc < 4294967295
   csrr x2, mngr2proc < 25
   or x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_b(x1)

#Test 2: Or with self
   csrr x1, mngr2proc < 35
   or x3, x1, x1
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_c(x1)

#Test 3: Random test
   csrr x1, mngr2proc < 21474
   csrr x2, mngr2proc < 83648
   or x3, x1, x2
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



