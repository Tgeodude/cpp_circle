NAME  = megaphone

SRCS = ./megaphone.cpp

OBJS  = $(SRCS:.cpp=.o)

CC   = c++
RM  = rm -rf
CFLAGS = -Wall -Werror -Wextra -std=c++98


all:
	@$(MAKE) $(NAME) 

%.o:    %.cpp
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)
clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean $(NAME)