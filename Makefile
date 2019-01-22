# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magrab <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/15 19:18:49 by magrab            #+#    #+#              #
#    Updated: 2019/01/22 16:37:23 by magrab           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS=-W -Wall -Wextra -Werror
NAME=libft.a
SRC=./ft_atoi.c \
	./ft_bzero.c \
	./ft_isalnum.c \
	./ft_isalpha.c \
	./ft_isascii.c \
	./ft_isdigit.c \
	./ft_islower.c \
	./ft_isprime.c \
	./ft_isprint.c \
	./ft_isspace.c \
	./ft_isupper.c \
	./ft_itoa.c \
	./ft_lstadd.c \
	./ft_lstdel.c \
	./ft_lstdelone.c \
	./ft_lstiter.c \
	./ft_lstmap.c \
	./ft_lstnew.c \
	./ft_memalloc.c \
	./ft_memccpy.c \
	./ft_memchr.c \
	./ft_memcmp.c \
	./ft_memcpy.c \
	./ft_memdel.c \
	./ft_memmove.c \
	./ft_memset.c \
	./ft_nodenew.c \
	./ft_nodepushat.c \
	./ft_nodepushbegin.c \
	./ft_nodepushend.c \
	./ft_putchar.c \
	./ft_putchar_fd.c \
	./ft_putendl.c \
	./ft_putendl_fd.c \
	./ft_putnbr.c \
	./ft_putnbr_fd.c \
	./ft_putstr.c \
	./ft_putstr_fd.c \
	./ft_sqrt.c \
	./ft_strcat.c \
	./ft_strchr.c \
	./ft_strclr.c \
	./ft_strcmp.c \
	./ft_strcpy.c \
	./ft_strdel.c \
	./ft_strdup.c \
	./ft_strequ.c \
	./ft_striter.c \
	./ft_striteri.c \
	./ft_strjoin.c \
	./ft_strlcat.c \
	./ft_strlen.c \
	./ft_strmap.c \
	./ft_strmapi.c \
	./ft_strncat.c \
	./ft_strncmp.c \
	./ft_strncpy.c \
	./ft_strnequ.c \
	./ft_strnew.c \
	./ft_strnew_set.c \
	./ft_strnjoin.c \
	./ft_strnstr.c \
	./ft_strrchr.c \
	./ft_strrev.c \
	./ft_strsplit.c \
	./ft_strsrchr.c \
	./ft_strstr.c \
	./ft_strsub.c \
	./ft_strtrim.c \
	./ft_tolower.c \
	./ft_toupper.c \
	./ft_2dchar_make.c \
	./ft_2dchar_free.c \
	./ft_2dchar_print.c \
	./ft_strjoin_free.c \
	./get_next_line.c \
	./ft_pow.c \
	./ft_htoi.c \
	./ft_printf.c

OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all $(name) clean fclean re
