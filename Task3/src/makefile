all: Task3.o
	gcc -o Task3 Task3.o -lm

Task3.o: Task3.c
	gcc -c Task3.c

clean:
	rm -f *.o Task3
	
run: all
	./Task3
