# Compiler options
CC=gcc
FLAGS=-Wall -Wextra -Werror
COMPILE=@$(CC) $(FLAGS)
NAME=libft.a
HEADER = libft.h

# Binaries variables
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

MANDATORY_SRC = $(MANDAT_1) $(MANDAT_2)
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

all: bonus

$(NAME): $(MANDATORY_OBJ)
	$(info Compiling MANDATORY_OBJ into $(NAME))
	@ar -rcs $(NAME) $(MANDATORY_OBJ) $(HEADER)

bonus: $(MANDATORY_OBJ) $(BONUS_OBJ)
	$(info Compiling bonus into $(NAME))
	@ar -rcs $(NAME) $(MANDATORY_OBJ) $(BONUS_OBJ) $(HEADER)

bin/%.o: %.c
	@echo "- Compiling $< -> $@"
	@mkdir -p ${dir $@}
	@$(COMPILE) -c $< -o $@

# Clean logic
.PHONY: re fclean
re: fclean all

fclean:
	$(info Removing $(NAME))
	@rm -f $(NAME)
	$(info Removing binary directory)
	@rm -rf ./bin
	@#rm -f $(MANDATORY_OBJ) $(BONUS_OBJ)
	$(info Project now clean.)