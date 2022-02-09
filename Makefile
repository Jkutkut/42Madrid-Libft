# Compiler options
CC=gcc
FLAGS=-Wall -Wextra -Werror
COMPILE=@$(CC) $(FLAGS)
NAME=libft.a
HEADER = libft.h

# Colors:
NC				=	\033[0m
RED				=	\033[0;31m
GREEN			=	\033[0;32m
LRED			=	\033[1;31m
LGREEN			=	\033[1;32m
YELLOW			=	\033[1;33m
LBLUE			=	\033[1;34m
TITLE			=	\033[38;5;33m

# Binaries variables
CUSTOM	=	ft_hasany.c \
			ft_islower.c \
			ft_isupper.c \
			ft_ndigits.c

MANDAT_1 =	ft_isalpha.c	ft_toupper.c	\
			ft_isdigit.c	ft_tolower.c	\
			ft_isalnum.c	ft_strchr.c		\
			ft_isascii.c	ft_strrchr.c	\
			ft_isprint.c	ft_strncmp.c	\
			ft_strlen.c		ft_memchr.c		\
			ft_memset.c		ft_memcmp.c		\
			ft_bzero.c		ft_strnstr.c	\
			ft_memcpy.c		ft_atoi.c		\
			ft_memmove.c	ft_calloc.c		\
			ft_strlcpy.c	ft_strdup.c		\
			ft_strlcat.c

MANDAT_2 =	ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

MANDATORY_SRC = $(MANDAT_1) $(MANDAT_2) $(CUSTOM)
MANDATORY_OBJ = $(MANDATORY_SRC:%.c=bin/%.o)

BONUS_SRC =	ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

BONUS_OBJ = $(BONUS_SRC:%.c=bin/%.o)

all: $(NAME)

$(NAME): $(MANDATORY_OBJ)
	@echo "\n${TITLE}Compiling${NC} ${YELLOW}mandatory${NC} into ${YELLOW}$(NAME)${NC}\c"
	@ar -rcs $(NAME) $(MANDATORY_OBJ) $(HEADER)
	@echo " ${GREEN}[OK]${NC}\n"

bonus: $(MANDATORY_OBJ) $(BONUS_OBJ)
	@echo "\n${TITLE}Compiling${NC} ${YELLOW}bonus${NC} into ${YELLOW}$(NAME)${NC}"
	@make MANDATORY_OBJ="$(MANDATORY_OBJ) $(BONUS_OBJ)"
	@echo "${YELLOW}bonus${NC} ${GREEN}[OK]${NC}\n"

bin/%.o: %.c
	@echo "- ${TITLE}Compiling${NC} $< -> $@\c"
	@mkdir -p ${dir $@}
	@$(COMPILE) -c $< -o $@
	@echo " ${GREEN}[OK]${NC}"

# Clean logic
.PHONY: re fclean

re: fclean all

fclean: clean

clean:
	@echo "${TITLE}Cleaning${NC}"
	@echo "- ${RED}Removing${NC} $(NAME)"
	@rm -f $(NAME)
	@echo "- ${RED}Removing${NC} binary directory"
	@rm -rf ./bin
	@echo "Project ${GREEN}clean${NC}.\n"
