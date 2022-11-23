NAME  = Bureaucrat

SRCS = ./main.cpp \
	./Bureaucrat.cpp \
	./AForm.cpp \
	./PresidentialPardonForm.cpp \
	./RobotomyRequestForm.cpp \
	./ShrubberyCreationForm.cpp \
	./Intern.cpp \

OBJS  = $(SRCS:.cpp=.o)

CC   = c++
RM  = rm -rf
CFLAGS = -g -Wall -Werror -Wextra -std=c++98

all:
	@$(MAKE) $(NAME)

%.o:    %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)
clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean $(NAME) 