# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarquez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/05 15:46:49 by amarquez          #+#    #+#              #
#    Updated: 2021/04/07 13:59:32 by amarquez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
C_SOURCE = ft_memset.c \
      ft_bzero.c \
      ft_memcpy.c \
      ft_memccpy.c \
      ft_memmove.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_strlen.c \
      ft_strlcpy.c \
      ft_strlcat.c \
      ft_strchr.c \
      ft_strrchr.c \
      ft_strnstr.c \
      ft_strncmp.c \
      ft_atoi.c \
      ft_isalpha.c \
      ft_isdigit.c \
      ft_isalnum.c \
      ft_isascii.c \
      ft_isprint.c \
      ft_toupper.c \
      ft_tolower.c \
      ft_calloc.c \
      ft_strdup.c \
      ft_substr.c \
      ft_strjoin.c \
      ft_strtrim.c \
      ft_split.c \
      ft_itoa.c \
      ft_strmapi.c \
      ft_putchar_fd.c \
      ft_putstr_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c
H_SOURCE = $(wildcard *.h)

OBJ = $(C_SOURCE:.c=.o)

BONUS_SOURCE = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c\
		ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c\
		ft_lstdelone.c ft_strncpy_bonus.c

OBJ_BONUS = $(BONUS_SOURCE:.c=.o)

CC = gcc

CC_FLAGS = -Wall -Werror -Wextra

all: ${NAME}

$(NAME) : $(OBJ) $(OBJ_BONUS)
	ar -rs $(NAME) $(OBJ) $(OBJ_BONUS)

bonus: ${OBJ_BONUS}
	ar -rs $(NAME) $(OBJ_BONUS)

%.o: %.c
	$(CC) $(CC_FLAGS) -I $(H_SOURCE) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

