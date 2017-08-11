# Test makefile 

FLAGS = -g		\
	-Werror		\
	-std=c99

# First target
main.o: main.c
	gcc $(FLAGS) -c -o main.o main.c

# Second target
main.out: main.o
	gcc -o main.out main.o

# Target all
.PHONY: all
all: main.out
#main.out: main.c
#	gcc $(FLAGS) -c -o main.out main.c

# Target clean
.PHONY: clean
clean:
	rm main.o main.out
