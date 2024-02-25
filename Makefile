# Set compiler
CC = cc

# Set flags, also tells to include "includes" directory for the .h file
CFLAGS = -Wall -Wextra -Werror

# This tells where the .c files are
SRCS = $(filter-out main.c, $(shell ls *.c))

BSRCS = $(filter-out $(SRCS), $(shell ls ft_lst*.c))

# This tells that the .o files are same place as .c files
OBJS = $(SRCS:.c=.o)

BOBJS = $(BSRCS:.c=.o)

# This is the name of the library
NAME = libft.a

# This creates the rule all, to build the library
all: $(NAME)

# This compiles all the .c files into .o files. Flag -c does not link the files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Archive .o files into a static library
$(NAME): $(OBJS)
	ar rcs $@ $^

bonus: $(OBJS) $(BOBJS)
	ar rcs $(NAME) $?

# removes the .o files
clean:
	rm -f $(OBJS)

# removes the .o files and the static library
fclean:
	rm -f $(OBJS)
	rm -f $(NAME)

# runs fclean and all again
re: fclean all

# bonus:

# tells this targets do not represent files
.PHONY: all clean fclean re

