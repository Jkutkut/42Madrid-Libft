# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jre-gonz <jre-gonz@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 09:47:39 by jre-gonz          #+#    #+#              #
#    Updated: 2022/10/20 09:13:17 by jre-gonz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Binaries variables
BIN			=	bin# Bin location
SRC			=	src# Source location
INCLUDE_L	=	include# Include location

# Compiler options
CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror
INCLUDE		=	-I./$(INCLUDE_L)
COMPILE		=	@$(CC) $(FLAGS) $(INCLUDE)
NAME		=	libft.a

# Colors:
NC			=	\033[0m
RED			=	\033[0;31m
GREEN		=	\033[0;32m
LRED		=	\033[1;31m
LGREEN		=	\033[1;32m
YELLOW		=	\033[1;33m
LBLUE		=	\033[1;34m
TITLE		=	\033[38;5;33m

# Default libft code
GNL			=	get_next_line.c

PRINTF		=	ft_printf.c

ANALYZE		=	ft_atoi.c \
				ft_hasany.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_islower.c \
				ft_isprint.c \
				ft_isupper.c \
				ft_itoa_base.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_ndigits.c \
				ft_ndigits_base.c \
				ft_pdigits_base.c \
				ft_ptoa_base.c \
				ft_strchr.c \
				ft_strlen.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c

LIST		=	ft_lstadd_back_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstmap_bonus.c \
				ft_lstnew_bonus.c \
				ft_lstsize_bonus.c

MODIFY		=	ft_bzero.c \
				ft_calloc.c \
				ft_free_array.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_split.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strmapi.c \
				ft_strtoupper.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c

PRINT		=	ft_putchar_fd.c \
				ft_putchar_fd_l.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_put_pointer_fd.c \
				ft_putstr_fd.c \
				ft_putstr_fd_l.c \
				ft_put_memory.c

LIBFT_SRC	=	$(GNL:%=get_next_line/%) \
				$(PRINTF:%=ft_printf/%) \
				$(ANALYZE:%=analyze/%) \
				$(MODIFY:%=modify/%) \
				$(PRINT:%=print/%) \
				$(LIST:%=list/%) # Bonus

SOURCE		=	$(LIBFT_SRC) # Libft files

SRC_CODE	=	$(SOURCE:%=$(SRC)/%)
OBJ			=	$(SRC_CODE:$(SRC)/%.c=$(BIN)/%.o)


# Triggers

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\n${TITLE}Compiling${NC} ${YELLOW}libft${NC} into ${YELLOW}$(NAME)${NC}\c"
	@ar -rcs $(NAME) $(OBJ)
	@echo " ${GREEN}[OK]${NC}\n"

$(BIN)/%.o: $(SRC)/%.c
	@echo "- ${TITLE}Compiling${NC} $< -> $@\c"
	@mkdir -p ${dir $@}
	@$(COMPILE) -c $< -o $@
	@echo " ${GREEN}[OK]${NC}"

# Clean logic
.PHONY: re fclean

re: fclean all

fclean: clean
	@echo "- ${RED}Removing${NC} $(NAME)"
	@rm -f $(NAME)
	@echo "Project ${YELLOW}Libft ${GREEN}clean${NC}.\n"

clean:
	@echo "- ${RED}Removing${NC} binary directory"
	@rm -rf $(BIN)
