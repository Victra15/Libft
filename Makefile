# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yolee <yolee@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 17:02:47 by yolee             #+#    #+#              #
#    Updated: 2021/11/26 19:33:27 by yolee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := gcc
CFLAGS := -Wall -Wextra -Werror
AR := ar
ARFLAGS := -rc
NAME := libft.a
SRCDIR := srcs
SRCS := $(SRCDIR)/ft_putchar.c
OBJS := $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)
	
re : fclean all
	
.PHONY : all clean fclean re