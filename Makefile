xor: xor.c
	gcc -Wall -pedantic -O3 -o xor xor.c

clean:
	rm xor
