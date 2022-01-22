# Compiler options
CC=gcc
FLAGS=-Wall -Wextra # TODO -Werror
COMPILE=@$(CC) $(FLAGS)
LIB_NAME=libft.a


# Binaries variables
FUNCTIONS=$(patsubst %.c,bin/%.o,$(wildcard *.c)) # TODO manual files

# Compilers:
all: $(LIB_NAME)


# Binary files
$(LIB_NAME): binaries
	$(info Compiling all into $(LIB_NAME))
	@ar -crs $(LIB_NAME) $(FUNCTIONS)

	@# ! debug
	@cp -f libft.h tests/

binaries: $(FUNCTIONS)
	$(info Object files ready)

bin:
	$(info Creating bin directory to store all object files)
	@mkdir bin

bin/%.o: %.c bin
	@#if [ ! -d $(dir $@) ]; then echo "Creating $(dir $@)"; mkdir -p $(dir $@); fi
	@echo "- Compiling $< -> $@"
	@$(COMPILE) -c $< -o $@


# Clean logic
.DELETE_ON_ERROR:
fclean: clean_main clean_bin
	$(info Project cleaned.)

re: fclean all

clean_main:
	$(info Removing $(LIB_NAME))
	@rm -f $(LIB_NAME)
	rm -f tests/$(LIB_NAME) tests/libft.h

clean_bin:
	$(info Removing binary directory)
	@rm -rf ./bin
