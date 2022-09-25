# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jledesma <jledesma@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 21:04:41 by jledesma          #+#    #+#              #
#    Updated: 2022/09/25 17:56:26 by jledesma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SOURCES = 	oper/free.c oper/push.c oper/reverse.c oper/rotate.c \
			oper/separate.c oper/sort_3.c oper/swap.c oper/utils.c \
			oper/split.c oper/libft.c oper/sort_5.c oper/sort_radix.c \
			push_swap.c
			
OBJECTS = ${SOURCES:.c=.o}

#BONUS
#SRC_BONUS =
#OBJ_BONUS = ${SRC_BONUS:.c=.o}

#LIBFT PLUS
SRC_PRINTF = Libft_plus
LIBFPRINTF = Libft_plus/libft.a

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@  -g
#Renders
#INCLUDES	= -I include -I MLX42/include/MLX42
#LIBS		= MLX42/libmlx42.a -lglfw -L /Users/${USER}/.brew/opt/glfw/lib/

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g
COLOR_DONE = \033[47m\033[1;32m

#Backgrouds Intensive
On_IRed='\033[0;101m'     # Red
On_IGreen='\033[0;102m'   # Green
On_IYellow='\033[0;103m'  # Yellow
On_IBlue='\033[0;104m'    # Blue
On_IPurple=\033[0;105m
# Reset
Color_Off=\033[0m

# Regular Colors
Black='\033[0;30m'       # Black
Red='\033[0;31m'          # Red
Green=\033[0;32m
Yellow='\033[0;33m'       # Yellow
Blue='\033[0;34m'         # Blue
Purple='\033[0;35m'       # Purple
Cyan='\033[0;36m'         # Cyan
White=\033[0;37m

# Bold
BBlack='\033[1;30m'       # Black
BRed='\033[1;31m'         # Red
BGreen=\033[1;32m
BYellow=\033[1;33m
BBlue='\033[1;34m'        # Blue
BPurple=\033[1;35m
BCyan='\033[1;36m'        # Cyan
BWhite='\033[1;37m'       # White

# Underline
UBlack='\033[4;30m'       # Black
URed='\033[4;31m'         # Red
UGreen='\033[4;32m'       # Green
UYellow='\033[4;33m'      # Yellow
UBlue='\033[4;34m'        # Blue
UPurple='\033[4;35m'      # Purple
UCyan='\033[4;36m'        # Cyan
UWhite=\033[4;37m

all:   $(NAME)


$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS)  $(OBJECTS) -o $(NAME) -g
	@echo "\n$(Color_Off)$(BGreen)>>	🤟	⓸⓶ Push Swap 	 ✅	<<	$(Color_Off)"

clean:
			@rm	-rf $(OBJECTS)
			@echo "\n$(BYellow)>>	💣	⓸⓶ Force Clean  💣	<<	$(Color_Off)"
			
fclean:	clean
			@rm -rf $(NAME)
			@echo "\n$(Bred)>>	💣	⓸⓶ Force Clean  💣	<<	$(Color_Off)"
bonus:

re: fclean all
			@echo "\n$(BPurple)>>	💣	⓸⓶ Force rebuild  💣	<<	$(Color_Off)"

.PHONY: all clean re fclean 