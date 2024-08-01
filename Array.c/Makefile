CC = gcc
CFLAGS = -Wall
TARGET = teste_lista

all: $(TARGET)

$(TARGET): main.o lista_sequencial.o
    $(CC) $(CFLAGS) -o $(TARGET) main.o lista_sequencial.o

main.o: main.c lista_sequencial.h
    $(CC) $(CFLAGS) -c main.c

lista_sequencial.o: lista_sequencial.c lista_sequencial.h
    $(CC) $(CFLAGS) -c lista_sequencial.c

clean:
    rm -f *.o $(TARGET)
