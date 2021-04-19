make: make.c
	touch me.c
	gcc make.c -w
	./a.out > me.c

bfk: bfk.c
	touch tao.bfk
	gcc -o bfk bfk.c -w
	./bfk > tao.bfk

me: me.c
	gcc -o me me.c -w

fun:
	./me

clean:
	rm a.out bfk me me.c tao.bfk