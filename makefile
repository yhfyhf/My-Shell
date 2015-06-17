main: main.c username.o ls.o
	gcc main.c username.o ls.o -o main.o

commands: username.c ls.c
	gcc -c username.c -o username.o
	gcc -c ls.c -o ls.o
