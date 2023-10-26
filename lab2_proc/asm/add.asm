#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

# set the address where you want this
# code segment

#provided test
   xor x1, x1, x1
   xori x1, x1, 0x0200
   add x3, x1, x1
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_a(x1)

#Test 1: 
   csrr x1, mngr2proc < -7
   csrr x2, mngr2proc < 2
   add x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_b(x1)
#Test 2:
   csrr x1, mngr2proc < 2147483647
   csrr x2, mngr2proc < 268435455
   add x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_c(x1)
#Test 3:
   csrr x1, mngr2proc < 2147483648
   csrr x2, mngr2proc < 2147483648
   add x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_d(x1)
#Test 4:
   csrr x1, mngr2proc < 2147483648
   csrr x2, mngr2proc < 2147483649
   add x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_e(x1)
#Test 5:
   csrr x1, mngr2proc < 5
   csrr x2, mngr2proc < 0 
   add x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_f(x1)

   csrw coreid x3
   csrw numcores x3
   csrw stats_en x3


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
   label_f:
   .word 5000


