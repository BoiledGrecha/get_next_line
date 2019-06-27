# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idamion- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/13 17:20:29 by idamion-          #+#    #+#              #
#    Updated: 2018/12/25 16:59:07 by idamion-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror -c

OBJS = ft_lstmap.o ft_putstr.o ft_strmapi.o ft_lstnew.o ft_putstr_fd.o \
ft_strncat.o ft_atoi.o ft_memalloc.o ft_strcat.o ft_strncmp.o ft_bzero.o \
ft_memccpy.o ft_strchr.o ft_strncpy.o ft_fill_mass.o ft_memchr.o ft_strclr.o \
ft_strnequ.o ft_fill_str.o ft_memcmp.o ft_strcmp.o ft_strnew.o ft_isalnum.o \
ft_memcpy.o ft_strcpy.o ft_strnstr.o ft_isalpha.o ft_memcpy_rev.o ft_strdel.o \
ft_strrchr.o ft_isascii.o ft_memdel.o ft_strdup.o ft_strsplit.o ft_isdigit.o \
ft_memmove.o ft_strequ.o ft_strstr.o ft_isprint.o ft_memset.o ft_strip.o \
ft_strsub.o ft_itoa.o ft_putchar.o ft_striter.o ft_strtrim.o ft_length_itoa.o \
ft_putchar_fd.o ft_striteri.o ft_tolower.o ft_lstadd.o ft_putendl.o \
ft_strjoin.o ft_toupper.o ft_lstdel.o ft_putendl_fd.o ft_strlcat.o \
ft_lstdelone.o ft_putnbr.o ft_strlen.o ft_lstiter.o ft_putnbr_fd.o ft_strmap.o \
ft_del_mass.o

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	gcc $(FLAGS) $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
