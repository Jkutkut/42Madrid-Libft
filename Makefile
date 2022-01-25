# Compiler options
CC=gcc
FLAGS=-Wall -Wextra # TODO -Werror
COMPILE=@$(CC) $(FLAGS)
LIB_NAME=libft.a


# Binaries variables
CUSTOM =	ft_islower.o \
			ft_isupper.o \
			ft_freearr.o \
			ft_ndigits.o

MANDAT_1 =	ft_isalpha.o \
			ft_isdigit.o \
			ft_isalnum.o \
			ft_isascii.o \
			ft_isprint.o \
			ft_strlen.o \
			ft_memset.o \
			ft_bzero.o \
			ft_memcpy.o \
			ft_memmove.o \
			ft_strlcpy.o \
			ft_strlcat.o \
			ft_toupper.o \
			ft_tolower.o \
			ft_strchr.o \
			ft_strrchr.o \
			ft_strncmp.o \
			ft_memchr.o \
			ft_memcmp.o \
			ft_strnstr.o \
			ft_atoi.o \
			ft_calloc.o \
			ft_strdup.o

MANDAT_2 =	ft_substr.o \
			ft_strjoin.o \
			ft_strtrim.o \
			ft_split.o \
			ft_itoa.o \
			ft_strmapi.o \
			ft_striteri.o \
			ft_putchar_fd.o \
			ft_putstr_fd.o \
			ft_putendl_fd.o \
			ft_putnbr_fd.o

# BONUS = 

MANDATORY = $(MANDAT_1) $(MANDAT_2) $(CUSTOM)

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
