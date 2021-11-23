
NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.c) 

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}
	ar rcs $(NAME) ${<:.c=.o}

clean:
	rm *.o

fclean: clean
	rm $(NAME)

re: fclean all

