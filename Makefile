CC = gcc
CFLAGS = -std=c17 -g -Wall -Wextra
TARGETS = $(patsubst %.c,%.exe,$(wildcard *.c))

.PHONY: all clean
all: $(TARGETS)

%.exe: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)
