# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghavenga <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/09 09:29:00 by ghavenga          #+#    #+#              #
#    Updated: 2016/05/30 09:09:07 by oexall           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = $(NAME1) $(NAME2) $(NAME3) $(NAME4) $(NAME5) $(NAME6) $(NAME7) $(NAME8)
NAME1 = atoi.c bzero.c isalnum.c isalpha.c isascii.c isdigit.c isprint.c
NAME2 = itoa.c memalloc.c memccpy.c memchr.c memcmp.c memcpy.c memdel.c
NAME3 = memmove.c memset.c putchar.c putchar_fd.c putendl.c putendl_fd.c
NAME4 = putnbr.c putnbr_fd.c putstr.c putstr_fd.c strcat.c strchr.c strclr.c
NAME5 = strcmp.c strcpy.c strdel.c strdup.c strequ.c striter.c striteri.c
NAME6 = strjoin.c strlcat.c strlen.c strmap.c strmapi.c strncat.c strncmp.c
NAME7 = strncpy.c strnequ.c strnew.c strnstr.c strrchr.c strsplit.c strstr.c
NAME8 = strsub.c strtrim.c tolower.c toupper.c get_next_line.c
HEADER = libft.h
LIBNAME = libft.a
CC = gcc
CFLAGS = -c -Wall -Werror -Wextra
OBJS = $(NAME:.c=.o)
	
all: obj lib clean

lib:
	ar rc $(LIBNAME) $(OBJS) $(HEADER)

obj:
		$(CC) $(CFLAGS) $(NAME) $(HEADER)

clean:
		rm -f $(OBJS)

fclean:
	rm -f $(OBJS) $(LIBNAME)

re: fclean all
