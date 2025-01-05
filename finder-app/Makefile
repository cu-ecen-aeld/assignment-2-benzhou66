CC=gcc
CFLAGS= -Wall -g

ifdef CROSS_COMPILE
CC=$(CROSS_COMPILE)gcc
endif

SRC=writer.c
OBJ=$(SRC:.c=.o)
all: writer
writer: $(OBJ)
	$(CC) $(CFLAGS) -o writer $(OBJ)
%.o: %.c
	$(CC) $(CFLAGS) -c $<
check_file:
	$(cc)file writer > ../assignments/assignment2/cross-compile.txt
clean:
	rm -f *.o writer
.PHONY: clean
