CC := gcc
CFLAGS := -Wall

main: src/*c
	$(CC) $(CFLAGS) -o $@ $^