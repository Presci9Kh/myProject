CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -Werror -pedantic -g3
SRC =  HelloWord.c palindrome.c operation.c
OBJ = $(SRC:.c=.o)
EXEC = bin

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

%.o: %.c
	$(CC) -o $@ -c $^ $(CFLAGS)

clean: 
	$(RM) $(OBJ) $(EXEC)
