#---------------------------------------
# sample asm file for tutorial
#---------------------------------------

# set the address where you want this
# code segment

#Test 0: Multiply by 0
   csrr x1, mngr2proc < 1
   csrr x2, mngr2proc < 0
   mul x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_a(x1)

#Test 1: Multiply by -1
   csrr x1, mngr2proc < 7
   csrr x2, mngr2proc < -1
   mul x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_b(x1)
   
#Test 2: Neg times neg
   csrr x1, mngr2proc < -2
   csrr x2, mngr2proc < -2
   mul x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_c(x1)

#Test 3: Neg times pos
   csrr x1, mngr2proc < 3
   csrr x2, mngr2proc < -2
   mul x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_d(x1)

#Test 4: Overflow pos times pos
   csrr x1, mngr2proc < 2147483647
   csrr x2, mngr2proc < 2 
   mul x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_e(x1)

#Test 5: Overflow neg times neg
   csrr x1, mngr2proc < 2147483648
   csrr x2, mngr2proc < 2 
   mul x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_f(x1)

#Test 6: Result of all Fs
   csrr x1, mngr2proc < -1
   csrr x2, mngr2proc < 1
   mul x3, x1, x2
   xor x1, x1, x1
   #Loading Data section
   lui x1, 2
   # label_a is 0x000, it's true location is 0x0002000 
   # but sw only takes lower 12-bits
   sw x3,  label_g(x1)


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
   label_g:
   .word 5000

