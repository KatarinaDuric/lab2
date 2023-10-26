#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

# set the address where you want this
# code segment

#Test 0: Compare neg to pos
   csrr x1, mngr2proc < -7
   csrr x2, mngr2proc < 2
   slt x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_a(x1)

#Test 1: Compare pos to neg
   csrr x1, mngr2proc < 7
   csrr x2, mngr2proc < -2
   slt x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_b(x1)
#Test 2: Compare any number to largest pos number
   csrr x1, mngr2proc < 416
   csrr x2, mngr2proc < 2147483647
   slt x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_c(x1)
#Test 3: Compare largest pos number to any number
   csrr x1, mngr2proc < 2147483647
   csrr x2, mngr2proc < 648
   slt x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_d(x1)
#Test 4: Compare any number to smallest neg number
   csrr x1, mngr2proc < -4
   csrr x2, mngr2proc < -2147483648
   slt x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_e(x1)
#Test 5: Compare smallest neg number to any number
   csrr x1, mngr2proc < -2147483648
   csrr x2, mngr2proc < 7
   slt x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_f(x1)


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


