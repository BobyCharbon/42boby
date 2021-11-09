# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
<<<<<<< HEAD
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltromber <ltromber@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 14:14:11 by tromano           #+#    #+#              #
#    Updated: 2021/11/05 19:22:17 by ltromber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	= ft_strlen.c\
			ft_putchar_fd.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_atoi.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strlcat.c\
			ft_strjoin.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_putendl_fd.c\
			ft_strlcpy.c\
			ft_strdup.c\
			ft_calloc.c\
			ft_substr.c\
			ft_split.c\
			ft_strtrim.c\
			ft_itoa.c\
			ft_striteri.c\
			ft_strmapi.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a
LIBC	= ar rc
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror 



${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	clean

re: fclean all

.PHONY: all clean fclean re .c.o
=======
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kingtringer <kingtringer@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 11:13:30 by fvarrin           #+#    #+#              #
#    Updated: 2021/11/08 16:08:11 by kingtringer      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ROOT_DIR	?= $(shell pwd)
SRC_DIR		= ${ROOT_DIR}/libft/src/
HEADER_DIR 	= ${ROOT_DIR}/libft/src/include/
SRC		= $(addprefix ${SRC_DIR}, ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		  	ft_strlcpy.c)
OBJ		= $(SRC:.c=.o);
CC 		= gcc
AR 		= ar rc
NAME 		= libft.a
NORM_BIN	= norminette
NORM_FLAGS	= -RCheckForbiddenSourceHeader -RCheckDefine
RM		= rm -f
CFLAGS		= -Wall -Wextra -Werror -I${HEADER_DIR}
CXXFLAGS += -fPIC
CXXFLAGS += -O3

x.so:
    $(LINK.cc) -shared $^ $(LOADLIBS) $(LDLIBS) -o $@

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

.PHONY: 	all clean fclean re

${NAME}:	${OBJ}
		${AR} ${NAME} ${OBJ}

all: 		${NAME}

clean:
		${RM} ${OBJ}

fclean: 	clean
		${RM} ${NAME}

re:		fclean ${NAME}

lint:		fclean
		${NORM_BIN} ${NORM_FLAGS}
>>>>>>> makefile
