# Compiler options
CC=gcc
FLAGS=-Wall -Wextra # TODO -Werror
COMPILE=@$(CC) $(FLAGS)
LIB_NAME=libft.a


# Binaries variables
CUSTOM =	bin/ft_islower.o \
			bin/ft_isupper.o \
			bin/ft_freearr.o \
			bin/ft_ndigits.o

MANDAT_1 =	bin/ft_isalpha.o \
			bin/ft_isdigit.o \
			bin/ft_isalnum.o \
			bin/ft_isascii.o \
			bin/ft_isprint.o \
			bin/ft_strlen.o \
			bin/ft_memset.o \
			bin/ft_bzero.o \
			bin/ft_memcpy.o \
			bin/ft_memmove.o \
			bin/ft_strlcpy.o \
			bin/ft_strlcat.o \
			bin/ft_toupper.o \
			bin/ft_tolower.o \
			bin/ft_strchr.o \
			bin/ft_strrchr.o \
			bin/ft_strncmp.o \
			bin/ft_memchr.o \
			bin/ft_memcmp.o \
			bin/ft_strnstr.o \
			bin/ft_atoi.o \
			bin/ft_calloc.o \
			bin/ft_strdup.o

MANDAT_2 =	bin/ft_substr.o \
			bin/ft_strjoin.o \
			bin/ft_strtrim.o \
			bin/ft_split.o \
			bin/ft_itoa.o \
			bin/ft_strmapi.o \
			bin/ft_striteri.o \
			bin/ft_putchar_fd.o \
			bin/ft_putstr_fd.o \
			bin/ft_putendl_fd.o \
			bin/ft_putnbr_fd.o

MANDATORY = $(MANDAT_1) $(MANDAT_2) $(CUSTOM)

BONUS =		bin/ft_atoi.o


# Compilers:
all: $(LIB_NAME)
bonus: $(LIB_NAME)_bonus

# Binary files
.PHONY: re fclean clean_lib clean_bin
$(LIB_NAME): $(MANDATORY)
	$(info Compiling mandatory into $(LIB_NAME))
	@ar -crs $(LIB_NAME) $^

	@cp -f libft.h tests/ # ! DEBUG

$(LIB_NAME)_bonus: $(MANDATORY) $(BONUS)
	$(info Compiling bonus into $(LIB_NAME))
	@ar -crs $(LIB_NAME) $^

	@cp -f libft.h tests/ # ! DEBUG


bin/%.o: %.c
	@echo "- Compiling $< -> $@"
	@mkdir -p bin
	@$(COMPILE) -c $< -o $@

# Clean logic
.DELETE_ON_ERROR:
fclean: clean_lib clean_bin
	$(info Project cleaned.)

re: fclean all

clean_lib:
	$(info Removing $(LIB_NAME))
	@rm -f $(LIB_NAME)
	rm -f tests/libft.h # ! DEBUG

clean_bin:
	$(info Removing binary directory)
	@rm -rf ./bin
