BINARY=test
CODEDIRS=../lib ../tests
INCDIR=../include/

CC=gcc
OPT=-Og
# https://stackoverflow.com/questions/8025766/makefile-auto-dependency-generation
DEPFLAGS=-MP -MD
CFLAGS=-I$(INCDIR) $(OPT) $(DEPFLAGS)

CFILES=$(foreach dir, $(CODEDIRS), $(wildcard $(dir)/*.c))
OBJETCS=$(patsubst %.c, %.o, $(CFILES))
DEPFILES=$(patsubst %.c, %.d, $(CFILES))

all: $(BINARY)

$(BINARY): $(OBJETCS)
	$(CC) $(CFLAGS) -o $@ $^

# https://stackoverflow.com/questions/3220277/what-do-the-makefile-symbols-and-mean
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJETCS) $(DEPFILES)

fclean: clean
	rm -f $(BINARY)

re: fclean all

print:
	@echo $(CFILES)
	@echo $(OBJETCS)
	@echo $(DEPFILES)

# include the dependency files
-include $(DEPFILES)