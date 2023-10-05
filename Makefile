BINARY=push_swap
CODEDIRS=. lib src
INCDIR=./include/
BIN_DIR=./bin/

CC=gcc
OPT=-O0
# https://stackoverflow.com/questions/8025766/makefile-auto-dependency-generation
DEPFLAGS=-MP -MD
CFLAGS=-Wall -Wextra -Werror -I$(INCDIR) $(OPT) $(DEPFLAGS)

CFILES=$(foreach dir, $(CODEDIRS), $(wildcard $(dir)/*.c))
OBJETCS=$(patsubst %.c, %.o, $(CFILES))
DEPFILES=$(patsubst %.c, %.d, $(CFILES))

all: $(BINARY)

$(BINARY): $(OBJETCS)
	$(CC) $(CFLAGS) -o $(BIN_DIR)$@ $^

# https://stackoverflow.com/questions/3220277/what-do-the-makefile-symbols-and-mean
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJETCS) $(DEPFILES)

fclean: clean
	rm -f $(BINARY)

re: fclean all

diff:
	$(info The status of the repository, and the volume of per-file changes:)
	@git status
	@git --no-pager diff --stat

print:
	@echo $(CFILES)
	@echo $(OBJETCS)
	@echo $(DEPFILES)

# include the dependency files
-include $(DEPFILES)