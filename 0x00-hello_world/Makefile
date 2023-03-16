CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89

# NOTE: in task 5 (long long int) works only when c99 is enabled
# check if libc6-dev-i386 is installed
#if not, install it
#sudo apt-get install libc6-dev-i386
#then link the 32 bit libraries with CFLAGS+=-m32
all: 0 1 2 3 4 5 6 7 8

0:
	@./0-preprocessor

1:
	@./1-compiler

2:
	@./2-assembler

3:
	@./3-name

4:
	@$(CC) $(CFLAGS) 4-puts.c -o 4-puts
	@if ./4-puts > expected_output/4-puts.out ; then echo "4-puts: PASS"; else echo "4-puts: FAIL"; fi

5:
	@$(CC) $(CFLAGS) 5-printf.c -o 5-printf
	@if ./5-printf > expected_output/5-printf.out ; then echo "5-printf: PASS"; else echo "5-printf: FAIL"; fi

6:
	@$(CC) -Wall -Werror -Wextra -pedantic -std=c99 -m32 6-size.c -o 6-size
	@if ./6-size > expected_output/6-size.out ; then echo "6-size: PASS"; else echo "6-size: FAIL"; fi

100:
	@./100-intel

101:
	@$(CC) $(CFLAGS) 101-quote.c -o 101-quote
	@if ./101-quote 2> expected_output/101-quote.out ; then echo "101-quote: FAIL"; else echo "101-quote: PASS"; fi

clean:
	@$ rm -f c main.o main.s cisfun 4-puts 5-printf 6-size 101-quote
