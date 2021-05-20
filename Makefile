# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfournie <marvin@42quebec.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/10 10:07:12 by sfournie          #+#    #+#              #
#    Updated: 2021/05/19 13:52:29 by sfournie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Werror -Wall -Wextra

NAME	= libft.a

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_atoi.c ft_strlen.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_strchr.c ft_strlcpy.c ft_strlcat.c \
		ft_strdup.c ft_calloc.c ft_bzero.c ft_memset.c ft_memmove.c \
		ft_memcpy.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_itoa.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS	= $(patsubst %.c,%.o,$(SRCS))

BSRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c

BOBJS	= $(patsubst %.c,%.o,$(BSRCS))

HEAD	= libft.h

$(NAME) : $(HEAD) $(OBJS)
		ar crs $(NAME) $(OBJS)

all		: $(NAME)

bonus	: $(HEAD) $(BOBJS)
		ar crs $(NAME) $(BOBJS)

clean	:
		rm -rf $(OBJS)
		rm -rf $(BOBJS)

fclean	: clean
		rm -rf $(NAME)

re		: fclean all

.PHONY	: clean all re fclean bonus