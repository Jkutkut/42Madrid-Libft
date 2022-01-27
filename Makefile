# Compiler options
CC=gcc
FLAGS=-Wall -Wextra -Werror
COMPILE=@$(CC) $(FLAGS)
LIB_NAME=libft.a

# Binaries variables
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

MANDATORY = $(MANDAT_1) $(MANDAT_2)

BONUS_OBJ =	bin/ft_lstnew_bonus.o \
			bin/ft_lstadd_front_bonus.o \
			bin/ft_lstsize_bonus.o \
			bin/ft_lstlast_bonus.o \
			bin/ft_lstadd_back_bonus.o \
			bin/ft_lstdelone_bonus.o \
			bin/ft_lstclear_bonus.o \
			bin/ft_lstiter_bonus.o \
			bin/ft_lstmap_bonus.o

all: $(LIB_NAME)

$(LIB_NAME): $(MANDATORY)
	$(info Compiling mandatory into $(LIB_NAME))
	@ar rc $(LIB_NAME) $^

bonus: $(MANDATORY) $(BONUS_OBJ)
	$(info Compiling bonus into $(LIB_NAME))
	@ar rc $(LIB_NAME) $^

bin/%.o: %.c
	@echo "- Compiling $< -> $@"
	@mkdir -p bin
	@$(COMPILE) -c $< -o $@

# Clean logic
.PHONY: re fclean
re: fclean bonus

fclean:
	$(info Removing $(LIB_NAME))
	@rm -f $(LIB_NAME)
	$(info Removing binary directory)
	@rm -rf ./bin
	$(info Project now clean.)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(wildcard *.c)
	gcc -nostartfiles -shared -o libft.so $(MANDATORY) $(BONUS_OBJ)