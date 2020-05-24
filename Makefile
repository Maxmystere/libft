# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbottini <tbottini@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/15 19:18:49 by magrab            #+#    #+#              #
#    Updated: 2019/04/28 16:40:42 by tbottini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include include.mk

ifeq ($(OS),Windows_NT)
SRCS		:=		$(patsubst ./%,.\\%,$(SRCS_LIBFT))
else
SRCS		:=		$(SRCS_LIBFT)
endif

ifeq ($(OS),Windows_NT)
RM			:=		del
else
RM			:=		rm -f
endif

NAME		:=		libft.a

INCLUDE 	:=		-I /usr/local/include -I ../include

CC			:=		gcc

CFLAGS		:=		-Wall -Wextra -Werror

LIB 		:=

ifeq ($(OS),Windows_NT)

NB_SRCS			:=		$(shell dir *.c | find /c ":\")

NB_OBJS			=		0

else

NB_SRCS			:=		$(shell ls *.c | wc -l)

NB_OBJS			=		$(shell ls | rev | grep "^o" | wc -l | sed -e 's/[^0-9]//g')

endif

MAX_FILL		:=		$$(( $(NB_SRCS) / 2))

FILL_BAR		=		$$(( $(NB_OBJS) * $(MAX_FILL) / $(NB_SRCS)))

PERCENT			=		$$((  $(NB_OBJS) * 100 / $(NB_SRCS)))

INV_FILL_BAR	=		$$(( $(MAX_FILL) - $(FILL_BAR)))

OBJS = $(SRCS:.c=.o)

all: $ $(NAME)

%.o		:		%.c libft.h
	
ifeq ($(OS),Windows_NT)
else
	@printf '\rCompilation $(NAME)\n'
	@printf '[\e[36m%*s' $(FILL_BAR) | tr ' ' '#'
	@printf '%*s\e[0m] \e[36m $<\e[0m' $(INV_FILL_BAR)
endif
	@$(CC) $(CFLAGS)  -c -o $@ $<
ifeq ($(OS),Windows_NT)
else
	@printf '\033[M\033[A'
endif

$(NAME)	: $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
ifeq ($(OS),Windows_NT)
else
	@printf "\e[M\e[A\n\e[36m[--------Libft--------]\n\e[0m"
endif

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

verif		:
	norminette $(SRCS) include/libft.h
	$(all)

re: fclean all

.PHONY: all clean fclean re a
