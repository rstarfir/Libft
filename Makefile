# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rstarfir <rstarfir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/03 22:22:01 by rstarfir          #+#    #+#              #
#    Updated: 2019/09/09 18:29:51 by rstarfir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES = *.c
OBJECTS = *.o 
HEADERS = ./
GCCF = -Wall -Wextra -Werror
all: $(NAME)

$(NAME):
	gcc $(GCCF) -c $(FILES) -I $(HEADERS)
	ar rc $(NAME) $(OBJECTS)

clean: 
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
