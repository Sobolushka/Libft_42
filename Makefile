# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: UTurkey <uturkey@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/18 21:04:21 by UTurkey           #+#    #+#              #
#    Updated: 2020/05/24 23:04:12 by UTurkey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_itoa.c \
	ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_putchar_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putstr_fd.c  ft_split.c ft_strchr.c \
	ft_strdup.c ft_strjoin.c \
	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
	ft_strncmp.c ft_strnstr.c \
	ft_strrchr.c ft_strstr.c ft_strtrim.c\
	ft_substr.c ft_tolower.c ft_toupper.c

OBJECTS=ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o \
	ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o \
	ft_itoa.o \
	ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o \
	ft_memmove.o ft_memset.o ft_putchar_fd.o \
	ft_putendl_fd.o ft_putnbr_fd.o \
	ft_putstr_fd.o  ft_split.o ft_strchr.o \
	ft_strdup.o ft_strjoin.o \
	ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strmapi.o \
	ft_strncmp.o ft_strnstr.o \
	ft_strrchr.o ft_strstr.o ft_strtrim.o\
	ft_substr.o ft_tolower.o ft_toupper.o
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c\
		ft_lstsize.c ft_lstlast.c ft_lstdelone.c ft_lstclear.c \
		ft_lstiter.c ft_lstmap.c
BONUSO = ft_lstadd_back.o ft_lstadd_front.o ft_lstlast.o \
			ft_lstnew.o ft_lstsize.o ft_lstdelone.o ft_lstclear.o \
			ft_lstiter.o ft_lstmap.o
INCLUDES=./

all: $(NAME)

$(NAME): $(OBJECTS) libft.h
	@gcc -Wall -Wextra -Werror -std=c99 -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
bonus: $(BONUSO) libft.h
	@gcc -Wall -Wextra -Werror -std=c99 -I$(INCLUDES) -c $(BONUS)
	@ar rc $(NAME) $(BONUSO)
	@ranlib $(NAME)