# Define variables
SRCS = instructiions_1.c instructions_2.c instructions_3.c algo.c utils.c allegro.c
OBJS = $(SRCS:.c=.o)
NAME = com.a
LIBC = ar rc
LIBR = ranlib
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

# Rule to compile .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to create the library
$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)

# Default rule to build the library
all: $(NAME)

# Rule to clean object files
clean:
	$(RM) $(OBJS)

# Rule to clean object files and the library
fclean: clean
	$(RM) $(NAME)

# Rule to rebuild everything
re: fclean all
