# Binaries variables
BIN			=	../../bin/get_next_line/
LIBFT		=	../libft/# Libft location

# Compiler options
CC				=	@gcc
FLAGS			=	-Wall -Wextra -Werror
INCLUDE			=	-I ../../include/
COMPILE			=	$(CC) $(FLAGS) $(INCLUDE)
LIB_COMPILE		=	@ar rcs

LIB_NAME		=	../../get_next_line.a

BUFFER_S		=	1024

# Colors:
NC			=	\033[0m
RED			=	\033[0;31m
GREEN		=	\033[0;32m
LRED		=	\033[1;31m
LGREEN		=	\033[1;32m
YELLOW		=	\033[1;33m
LBLUE		=	\033[1;34m
TITLE		=	\033[38;5;33m

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
	@echo "\n${TITLE}Compiling${NC} ${YELLOW}GNL${NC} into ${YELLOW}$(LIB_NAME)${NC}\c"
	$(LIB_COMPILE) $(LIB_NAME) $^
	@echo " ${GREEN}[OK]${NC}\n"

$(BIN)%.o: %.c
	@echo "- ${TITLE}Compiling${NC} $< -> $@\c"
	@mkdir -p $(dir $@)
	$(COMPILE) -c $< -o $@ -D BUFFER_SIZE=$(BUFFER_S)
	@echo " ${GREEN}[OK]${NC}"

# Clean logic
.PHONY: re fclean

re: fclean all

clean:
	@echo "- ${RED}Removing${NC} binary directory"
	@rm -rf $(BIN)

fclean: clean
	@echo "- ${RED}Removing${NC} $(LIB_NAME)"
	@rm -f $(LIB_NAME)
	@echo "Project ${GREEN}clean${NC}.\n"
