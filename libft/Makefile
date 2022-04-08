# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcloarec <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 13:48:37 by mcloarec          #+#    #+#              #
#    Updated: 2022/04/01 12:49:28 by mcloarec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_bzero.c
SRCS += ft_isalnum.c
SRCS += ft_isalpha.c
SRCS += ft_isascii.c
SRCS += ft_isdigit.c
SRCS += ft_isprint.c
SRCS += ft_memcpy.c
SRCS += ft_memset.c
SRCS += ft_strlen.c
SRCS += ft_strlcpy.c
SRCS += ft_memmove.c
SRCS += ft_toupper.c
SRCS += ft_tolower.c
SRCS += ft_strlcat.c
SRCS += ft_strchr.c
SRCS += ft_strrchr.c
SRCS += ft_strncmp.c
SRCS += ft_memchr.c
SRCS += ft_memchr.c
SRCS += ft_memcmp.c
SRCS += ft_strnstr.c
SRCS += ft_atoi.c
SRCS += ft_calloc.c
SRCS += ft_strdup.c
SRCS += ft_substr.c
SRCS += ft_strjoin.c
SRCS += ft_strtrim.c
SRCS += ft_split.c
SRCS += ft_itoa.c
SRCS += ft_strmapi.c
SRCS += ft_striteri.c

OBJS = $(SRCS:.c=.o)

NAME =	libft.a

CC =	ar rcs

RM =	rm -f

CFLAGS =	-Wall -Wextra -Werror

all: $(NAME)

.c.o:
		gcc $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
		$(CC) -o $(NAME) $(OBJS)

clean:	
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
