
NAME = so_long
CC = gcc
INC = so_long.h
OPENGL = -lXext -lX11 -lbsd -lm
FLAGS = -Iminilibx-linux
-fsanitize=address

SRCS =	so_long.c		\
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

OBJS = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
		make -C minilibx-linux
		$(CC) -o $(NAME) $(OBJS) $(FLAGS) minilibx-linux/libmlx.a $(OPENGL)

$(OBJS):	$(SRCS) $(INC)
		$(CC) $(FLAGS) -c $(SRCS)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:		fclean all
