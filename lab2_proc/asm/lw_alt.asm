xor x1, x1, x1
xori x1, x1, 4
add x1, x1, x1
lw x1, label_a(x1)
add x1, x1, x1
lw x1, label_a(x1)
add x1, x1, x1
lw x1, label_a(x1)
add x1, x1, x1
lw x1, label_a(x1)
add x1, x1, x1
lw x1, label_a(x1)
add x1, x1, x1
lw x1, label_a(x1)
add x1, x1, x1
lw x1, label_a(x1)
add x1, x1, x1
lw x1, label_a(x1)


.data
label_a:
.word 5000
