##
## EPITECH PROJECT, 2018
## libredcode
## File description:
## The library build instructions.
##

CC = gcc
CFLAGS = -Iinclude -pipe -O2
CFLAGS += -Wall -Wextra -Wuninitialized -Wformat-security -Wshadow

NAME = libredcode.a

SRCS = $(wildcard src/*.c) $(wildcard src/**/*.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $@ $^

clean:
	$(RM) src/*.o src/**/*.o
	$(RM) src/*.gc* src/**/*.gc*

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
