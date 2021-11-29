# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maskedduck <maskedduck@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/21 13:18:56 by user42            #+#    #+#              #
#    Updated: 2021/09/16 15:53:20 by maskedduck       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = gcc
INC = so_long.h
OPENGL = -lXext -lX11 -lbsd -lm

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

MACOS_MACRO = -D MACOS

LINUX_MACRO = -D LINUX

MACOS_FLAGS	= -L minilibx_opengl_20191021 -lmlx -framework OpenGL -framework AppKit 

LINUX_FLAGS = -L minilibx-linux -lmlx -lm -lX11 -lXext -lpthread

ifeq ($(UNAME),Darwin)
	NUM_THREADS = $(shell sysctl -n hw.ncpu)
	CFLAGS += $(MACOS_MACRO)
	FLAGS += $(MACOS_FLAGS)
endif
ifeq ($(UNAME),Linux)
	NUM_THREADS = $(shell nproc --all)
	CFLAGS += $(LINUX_MACRO)
	FLAGS += $(LINUX_FLAGS)
endif

all:	$(NAME)

$(NAME):	$(OBJS)
				@make -C ./minilibx_mms
				@make -C ./minilibx_opengl
				@cp ./minilibx_mms/libmlx.dylib libmlx.dylib
				@cp ./minilibx_opengl/libmlx.a libmlx.a
		$(CC) -o $(NAME) $(OBJS) $(FLAGS) $(OPENGL)

$(OBJS):	$(SRCS) $(INC)
		$(CC) $(FLAGS) -c $(SRCS)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:		fclean all

.PHONY:	all bonus clean fclean re