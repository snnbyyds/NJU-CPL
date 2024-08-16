main.out: max.o main.o
	gcc -o main.out max.o main.o
max.o: max.c max.h
	gcc -c -o max.o max.c
main.o: main.c max.h
	gcc -c -o main.o main.c
clean:
	rm -rf *.o *.out
run: main.out
	./main.out