test: main.c
	gcc main.c -o tester

run: tester
	./tester

clean:
	rm tester
	rm *~
	rm *.o
