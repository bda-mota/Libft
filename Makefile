# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 15:55:15 by bda-mota          #+#    #+#              #
#    Updated: 2023/11/07 13:58:41 by bda-mota         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
CBONUSFILES = ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c
OFILES = ${CFILES:%.c=%.o}
OBONUSFILES = ${CBONUSFILES:%.c=%.o}
HEADER = -I .
CC = cc
FLAGS = -Wall -Werror -Wextra

all: ${NAME}
${NAME}: ${OFILES}

bonus:	${OBONUSFILES}

%.o: %.c
	${CC} ${FLAGS} ${HEADER} -c $< -o $@
	ar rcs ${NAME} $@

clean:
	rm -f ${OFILES} ${OBONUSFILES}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
