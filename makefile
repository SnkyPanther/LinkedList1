main: init.o add.o print.o delete.o search.o get_node.o release_node.o main.o
	gcc -o main init.o add.o print.o delete.o search.o get_node.o release_node.o main.o
init.o: init.c main.h
	gcc -c init.c
add.o: add.c main.h
	gcc -c add.c
print.o: print.c main.h
	gcc -c print.c
delete.o: delete.c main.h
	gcc -c delete.c
search.o: search.c main.h
	gcc -c search.c
get_node.o: get_node.c main.h
	gcc -c get_node.c
release_node.o: release_node.c main.h
	gcc -c release_node.c
main.o: main.c main.h
	gcc -c main.c
clean:
	rm main init.o add.o print.o delete.o search.o get_node.o release_node.o main.o
