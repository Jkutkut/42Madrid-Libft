# Binaries variables
BIN			=	../../bin/get_next_line/
LIBFT		=	../libft/# Libft location

# Compiler options
CC				=	@gcc
FLAGS			=	-Wall -Wextra -Werror
COMPILE			=	$(CC) $(FLAGS) $(INCLUDE)
LIB_COMPILE		=	@ar rcs

LIB_NAME		=	../../get_next_line.a

BUFFER_S		=	1024

# Binaries variables

LIBFT_DEPENDENCIES	=	analyze/ft_strlen.c \
						modify/ft_strlcpy.c \
						modify/ft_strdup.c \
						modify/ft_strjoin.c \
						modify/ft_substr.c

SRC	=	get_next_line.c \
		$(LIBFT_DEPENDENCIES:%=$(LIBFT)%)

OBJ	=	${SRC:%.c=$(BIN)%.o}


# Triggers
all: $(LIB_NAME)

bonus: all

$(LIB_NAME): $(OBJ)
	$(info Compiling mandatory into $(LIB_NAME))
	$(LIB_COMPILE) $(LIB_NAME) $^

$(BIN)%.o: %.c
	@echo "- Compiling $< -> $@"
	@mkdir -p $(dir $@)
	$(COMPILE) -c $< -o $@ -D BUFFER_SIZE=$(BUFFER_S)

# Clean logic
.PHONY: re fclean

re: fclean all

clean:
	$(info Removing binary directory)
	@rm -rf ./bin

fclean: clean
	$(info Removing $(LIB_NAME))
	@rm -f $(LIB_NAME)
