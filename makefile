CC = gcc
CFLAGS = -Iinclude -Wall
SRC = src/main.c src/cadastro.c src/calculos.c
OUT = supertrunfo

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) -o $(OUT) $(SRC)

clean:
	rm -f $(OUT)
