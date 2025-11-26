# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/26 05:12:24 by sbansacc          #+#    #+#              #
#    Updated: 2025/11/26 07:12:08 by sbansacc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		Animal
CXX =		c++
CXXFLAGS =	-Wall -Wextra -Werror -std=c++98
SRCS =		main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp
OBJDIR =	obj/
OBJS =		$(SRCS:%.cpp=$(OBJDIR)%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@
	@echo "🚀 Houston, we have a $(NAME)!"

$(OBJDIR)%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJDIR)
	@echo "🧹 Cleaning up the mess!"

fclean: clean 
	rm -f $(NAME)
	@echo "🧨 Obliterating all traces!"

re: fclean all

.PHONY:  all clean fclean re