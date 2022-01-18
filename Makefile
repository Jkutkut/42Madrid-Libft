# Compiler options
CC=gcc
FLAGS=-Wall -Wextra
COMPILE=@$(CC) $(FLAGS)
EXE_NAME=a.out


# Binaries variables
FUNCTIONS=$(patsubst %.c,bin/%.o,$(wildcard *.c))

# Compilers:
all: $(EXE_NAME)


# Binary files
$(EXE_NAME): $(MAIN) binaries
	$(info Compiling all into $(EXE_NAME))
	@#$(COMPILE) $(MAIN) $(OUTPUT) $(CHESS_LOGIC) -o $(EXE_NAME)

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

clean_main:
	$(info Removing $(EXE_NAME))
	@#rm -f $(EXE_NAME)

clean_bin:
	$(info Removing binary directory)
	@rm -rf ./bin
