# **** #
# NAME #
# **** #

NAME		=	mario_kart

# *** #
# DIR #
# *** #

DIRSRC		= ./srcs/
DIRINC		= ./includes

# ******* #
# FILES c #
# ******* #

SRC			=	${DIRSRC}random.c \
				${DIRSRC}struct_race.c \
				${DIRSRC}init_all.c \
				${DIRSRC}ft_atoi.c \
				${DIRSRC}ft_bzero.c \
				${DIRSRC}ft_show.c

# ******* #
# FILES o #
# ******* #

OBJ			=	${SRC:.c=.o}

# ############## #
# FLAGS COMMANDS #
# ############## #

CFLAGS		=	-Wall -Wextra -Werror

# ######## #
# COMMANDS #
# ######## #

.c.o:
				@gcc ${CFLAGS} -I ${DIRINC} -c $< -o ${<:.c=.o}

all: 		${NAME}

${NAME}:	${OBJ}
				@gcc ${CFLAGS} ${OBJ} -o ${NAME}
				@printf "\e[32;3m$@ successfully build\e[0m\n"

clean:
				@rm -f ${OBJ}
				@printf "\e[31;3mClean files\e[0m\n"

fclean: 	clean
				@rm -f ${NAME}
				@printf "\e[31;3mClean exec\e[0m\n"

re: 		fclean all
