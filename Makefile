NAME = philo
CC = cc -g
CFLAGS = -Wall -Wextra -Werror
RM = rm -fr

SRCS = srcs/main.c srcs/validations.c

OBJS = ${SRCS:.c=.o}

${NAME}: ${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -fr ${OBJS}

fclean: clean
		rm -fr ${NAME}

all: ${NAME}

re: fclean all

.PHONY: all clear fclean re
