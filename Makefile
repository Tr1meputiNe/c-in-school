CC=gcc
SRC=src/hello.c
OUT=build/hello

all:
	$(CC) $(SRC) -o $(OUT)

run: all
	./$(OUT)

clean:
	rm -f build/*