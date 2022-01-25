.PHONY: re fclean clean_lib clean_bin

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
# CUSTOM =	ft_islower.o \
# 			ft_isupper.o \
# 			ft_freearr.o \
# 			ft_ndigits.o

# MANDAT_1 =	ft_isalpha.o \
# 			ft_isdigit.o \
# 			ft_isalnum.o \
# 			ft_isascii.o \
# 			ft_isprint.o \
# 			ft_strlen.o \
# 			ft_memset.o \
# 			ft_bzero.o \
# 			ft_memcpy.o \
# 			ft_memmove.o \
# 			ft_strlcpy.o \
# 			ft_strlcat.o \
# 			ft_toupper.o \
# 			ft_tolower.o \
# 			ft_strchr.o \
# 			ft_strrchr.o \
# 			ft_strncmp.o \
# 			ft_memchr.o \
# 			ft_memcmp.o \
# 			ft_strnstr.o \
# 			ft_atoi.o \
# 			ft_calloc.o \
# 			ft_strdup.o

# MANDAT_2 =	ft_substr.o \
# 			ft_strjoin.o \
# 			ft_strtrim.o \
# 			ft_split.o \
# 			ft_itoa.o \
# 			ft_strmapi.o \
# 			ft_striteri.o \
# 			ft_putchar_fd.o \
# 			ft_putstr_fd.o \
# 			ft_putendl_fd.o \
# 			ft_putnbr_fd.o

# BONUS = 

MANDATORY = $(MANDAT_1) $(MANDAT_2) $(CUSTOM)

# Compilers:
all: $(LIB_NAME)


# Binary files
$(LIB_NAME): $(MANDATORY)
	$(info Object files ready)
	$(info Compiling mandatory into $(LIB_NAME))
	@ar -crs $(LIB_NAME) $^

	@cp -f libft.h tests/ # ! DEBUG


bin:
	$(info Creating bin directory to store all object files)
	@mkdir bin

# %.o: %.c
bin/%.o: %.c bin
	@echo "- Compiling $< -> $@"
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
