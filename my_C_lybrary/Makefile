# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tavelino <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/20 15:31:48 by tavelino          #+#    #+#              #
#    Updated: 2018/04/21 19:43:58 by tavelino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

FLAGS	= -Wall -Werror -Wextra

INCLUDE = ./

SOURCE	= ft_*.c

OBJ 	= ft_*.o

all		: $(NAME)

$(NAME)	: $(SOURCE) libft.h 
	@gcc $(FLAGS) -I $(INCLUDE) -c $(SOURCE)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean	:
	@/bin/rm -rf $(OBJ) 

fclean	: clean
	@/bin/rm -rf $(NAME)

re		: fclean all

