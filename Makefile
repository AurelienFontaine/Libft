# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afontain <afontain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 14:30:53 by afontain          #+#    #+#              #
#    Updated: 2022/11/17 14:15:23 by afontain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	libft.a
CC = 	gcc
RM =	rm -f
AR =	ar rcs
SRC =	ft_isalpha.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strrchr.c \
	ft_atoi.c \
	ft_isascii.c \
	ft_memchr.c \
	ft_memset.c \
	ft_strlen.c \
	ft_tolower.c \
	ft_bzero.c \
	ft_isdigit.c \
	ft_memcmp.c \
	ft_strchr.c \
	ft_strncmp.c \
	ft_toupper.c \
	ft_isalnum.c \
	ft_isprint.c \
	ft_memcpy.c \
	ft_strlcat.c \
	ft_strnstr.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_split.c

BONUS =	ft_lstadd_back.c	\
	ft_lstadd_front.c	\
	ft_lstdelone.c		\
	ft_lstlast.c		\
	ft_lstnew.c			\
	ft_lstsize.c		\
	ft_lstclear.c		\
	ft_lstiter.c		\
	ft_lstmap.c
	

BONUS_OBJS = $(BONUS:.c=.o)

CFLAGS = -Werror -Wextra -Wall

OBJS = $(SRC:.c=.o)

$(NAME): $(OBJS)
	 $(AR) $(NAME) $(OBJS)

all:	$(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: 	fclean all

bonus:	$(BONUS_OBJS)
		$(AR) $(NAME) $(BONUS_OBJS)
		
.PHONY:	all clean fclean re bonus
    