all:
	gcc src/hello.c -o bin/hello

run: all
	./bin/hello

clean:
	rm -f bin/hello
