# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 15:23:42 by sun-nabi          #+#    #+#              #
#    Updated: 2023/12/13 01:43:55 by sun-nabi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
CC = cc
RM = rm -f

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strmapi.c  \
 		ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strtrim.c  \
  		ft_strchr.c ft_strrchr.c ft_strnstr.c ft_atoi.c ft_split.c ft_striteri.c \
   		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c  \
    	ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c  \
	 	ft_strjoin.c ft_strtrim.c ft_strncmp.c ft_itoa.c ft_putchar_fd.c  \
	  	ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \

SRC_BONUS = ft_lstadd_front.c ft_lstclear.c ft_lstnew.c ft_lstlast.c \
			ft_lstsize.c ft_lstmap.c ft_lstadd_back.c ft_lstdelone.c ft_lstiter.c  \

OBJS = $(SRC:.c=.o)
OBJS_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@echo "Removing old objects."
	@$(RM) $(OBJS) $(OBJS_BONUS)

fclean:
	@echo "Removing old objects and libraries..."
	@$(RM) $(OBJS) $(NAME) $(OBJS_BONUS)

re: fclean all

bonus : $(OBJS_BONUS) $(OBJS)
	@echo "Bonus"
	@$(AR) $(NAME) $(OBJS_BONUS) $(OBJS)

.PHONY:	all clean fclean re bonus
