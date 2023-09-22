all: main.o lib.a
	gcc -Wall -Wextra -Werror -o push_swap main.o lib.a

main.o: main.c
	gcc -Wall -Wextra -Werror -c main.c