# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eestela <eestela@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/21 13:18:56 by user42            #+#    #+#              #
#    Updated: 2021/12/14 18:03:20 by eestela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = clang
OPENGL = -lXext -lX11 -lbsd -lm
CFLAGS = -Wall -Wextra -Werror -Iminilibx-linux -ISrcs -IBonus

SRCS = error.c				\
		ft_convert.c		\
		ft_counter.c		\
		ft_display.c		\
		ft_free_img.c		\
		ft_generate.c		\
		ft_guard1.c			\
		ft_guard.c			\
		ft_map.c			\
		ft_map1.c			\
		ft_window.c			\
		init_tab.c			\
		key_close.c			\
		key_mv.c			\
		put_num1.c			\
		put_num2.c			\
		put_sprites1.c		\
		put_sprites2.c		\
		so_long.c			\
		utils.c

SRCS_BONUS = error_bonus.c		\
		ft_convert_bonus.c		\
		ft_counter_bonus.c		\
		ft_display_bonus.c		\
		ft_free_img_bonus.c		\
		ft_generate_bonus.c		\
		ft_guard1_bonus.c		\
		ft_guard_bonus.c		\
		ft_map_bonus.c			\
		ft_map1_bonus.c			\
		ft_window_bonus.c		\
		init_tab_bonus.c		\
		key_close_bonus.c		\
		key_mv_bonus.c			\
		put_num1_bonus.c		\
		put_num2_bonus.c		\
		put_sprites1_bonus.c	\
		put_sprites2_bonus.c	\
		so_long_bonus.c			\
		utils_bonus.c

OBJS = ${addprefix Srcs/,${SRCS:.c=.o}}
OBJS_BONUS = ${addprefix Bonus/,${SRCS_BONUS:.c=.o}}

all:	$(NAME)

$(NAME):	$(OBJS)
		make -C minilibx-linux
		$(CC)  $(OBJS) $(CFLAGS) -o $(NAME) minilibx-linux/libmlx.a $(OPENGL)

bonus:	$(OBJS_BONUS)
		echo $(OBJS_BONUS)
		make -C minilibx-linux
		$(CC) $(OBJS_BONUS) $(CFLAGS) -o $(NAME) minilibx-linux/libmlx.a $(OPENGL)

clean:
		rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all bonus clean fclean re