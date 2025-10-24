# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joao-ped <joao-ped@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/23 18:54:22 by joao-ped          #+#    #+#              #
#    Updated: 2025/10/23 19:08:03 by joao-ped         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcpy ft_strlen.c ft_strtrim ft_substr.c ft_tolower.c ft_toupper.c ft_strrchr.c ft_atoi.c ft_strncmp.c ft_memchr.c ft_memcmp.c
HSRC = libft.h

.c: .o
	$(CC) $(FLAGS) -I$(HSRC) -c $< -o$@

OBJ = $(SRCS:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
