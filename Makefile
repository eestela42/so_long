NAME = so_long
CC = clang
INC = so_long.h
OPENGL = -lXext -lX11 -lbsd -lm
CFLAGS = -Wall -Wextra -Werror -Iminilibx-linux

SRCS = so_long.c		\
		ft_map.c 		\
		utils.c			\
		ft_convert.c	\
		ft_display.c	\
		put_sprites1.c	\
		put_sprites2.c	\
		put_num1.c		\
		put_num2.c		\
		ft_counter.c	\
		key_mv.c		\
		key_close.c		\
		init_tab.c		\
		ft_window.c		\
		ft_guard.c		\
		ft_generate.c	\
		error.c			\
		ft_free_img.c

SRCS_BONUS = 	so_long_bonus.c			\
				ft_map_bonus.c 			\
				utils_bonus.c			\
				ft_convert_bonus.c		\
				ft_display_bonus.c		\
				put_sprites1_bonus.c	\
				put_sprites2_bonus.c	\
				put_num1_bonus.c		\
				put_num2_bonus.c		\
				ft_counter_bonus.c		\
				key_mv_bonus.c			\
				key_close_bonus.c		\
				init_tab_bonus.c		\
				ft_window_bonus.c		\
				ft_guard_bonus.c		\
				ft_generate_bonus.c		\
				error_bonus.c			\
				ft_free_img_bonus.c

OBJS = ${addprefix Srcs/,${SRCS:.c=.o}}
OBJS_BONUS = ${addprefix Bonus/,${SRCS_BONUS:.c=.o}}

all:	$(NAME)

$(NAME):	$(OBJS)
		make -C minilibx-linux
		$(CC)  $(OBJS) $(FLAGS) -o $(NAME) minilibx-linux/libmlx.a $(OPENGL)

bonus:	$(OBJS_BONUS)
		make -C minilibx-linux
		$(CC) $(OBJS_BONUS) $(FLAGS) -o $(NAME) minilibx-linux/libmlx.a $(OPENGL)
clean:
		rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all bonus clean fclean re