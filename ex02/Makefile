# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcaro-ro <mcaro-ro@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/14 14:30:52 by mcaro-ro          #+#    #+#              #
#    Updated: 2026/01/15 12:32:21 by mcaro-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= abstract_class

INCDIR		= inc
SRCDIR		= src

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -I$(INCDIR)

SRCS		=	$(SRCDIR)/main.cpp			\
				$(SRCDIR)/AAnimal.cpp		\
				$(SRCDIR)/Dog.cpp			\
				$(SRCDIR)/Cat.cpp			\
				$(SRCDIR)/WrongAnimal.cpp	\
				$(SRCDIR)/WrongCat.cpp		\
				$(SRCDIR)/Brain.cpp
BUILDDIR	= build
OBJS		= $(SRCS:$(SRCDIR)%.cpp=$(BUILDDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Colors
GREEN   = \033[0;32m
YELLOW  = \033[0;33m
RESET   = \033[0m

clean:
	@echo "$(YELLOW)$(NAME): Cleaning object files...$(RESET)"
	@rm -rf $(BUILDDIR)
	@echo "$(GREEN)$(NAME): All objects have been cleaned!$(RESET)"

fclean: clean
	@echo "$(YELLOW)$(NAME): Cleaning all files...$(RESET)"
	@rm -f $(NAME)
	@echo "$(GREEN)$(NAME): All files have been cleaned!$(RESET)"

re: fclean all

.PHONY: all clean fclean re
