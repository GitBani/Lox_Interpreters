CC = clang
DIR = includes
CFLAGS = -I$(DIR) -g3 -Wall -Wextra -Wconversion -Wdouble-promotion -Wno-unused-parameter -Wno-unused-function -Wno-sign-conversion

TARGET = clox

SRCS = $(wildcard *.c)

OBJDIR = build

OBJS = $(patsubst %.c,$(OBJDIR)/%.o,$(SRCS))

all: $(OBJDIR) $(OBJDIR)/$(TARGET)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJDIR)/%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

run:
	make -s
	./$(OBJDIR)/$(TARGET)

clean:
	rm -rf $(OBJDIR)