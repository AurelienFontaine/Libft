# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 17:49:04 by marvin            #+#    #+#              #
#    Updated: 2022/10/07 17:49:04 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalnum.c ft_isprint.c ft_isalpha.c \
	   ft_isascii.c ft_isdigit.c ft_strchr.c \
	   ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	   ft_strncmp.c ft_strrchr.c ft_tolower.c \
	   ft_toupper.c ft_atoi.c ft_strdup.c \
	   ft_strnstr.c ft_memset.c ft_memcpy.c \
	   ft_memmove.c ft_bzero.c ft_memchr.c \
	   ft_memcmp.c ft_calloc.c ft_substr.c \
	   ft_strjoin.c ft_strtrim.c ft_split.c \
	   ft_itoa.c ft_strmapi.c ft_striteri.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	   ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c


FLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${BONUS:.c=.o}

CC = gcc
RM = rm -f

all:	$(NAME)

$(NAME):
	ar rc $(NAME) $(SRCS)

.c.o:
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) *.o

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

bonus:	$(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:	all clean fclean re bonus