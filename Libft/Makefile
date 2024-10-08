# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 11:42:29 by ucabanil          #+#    #+#              #
#    Updated: 2023/12/27 12:18:36 by ucabanil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# ----------------------------------------------- #
#---------------- VALIABLES ----------------------#
#-------------------------------------------------# 

NAME	=	libft.a
CC = gcc
# Used flag
CCFLAGS = -Wall -Wextra -Werror 
# .c files
C_FILES = ft_atoi.c\
ft_bzero.c\
ft_calloc.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_itoa.c\
ft_memchr.c\
ft_memcmp.c\
ft_memcpy.c\
ft_memmove.c\
ft_memset.c\
ft_putchar_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\
ft_putstr_fd.c\
ft_split.c\
ft_strchr.c\
ft_strdup.c\
ft_striteri.c\
ft_strjoin.c\
ft_strlcat.c\
ft_strlcpy.c\
ft_strlen.c\
ft_strmapi.c\
ft_strncmp.c\
ft_strnstr.c\
ft_strrchr.c\
ft_strtrim.c\
ft_substr.c\
ft_tolower.c\
ft_toupper.c

B_FILES = ft_lstnew_bonus.c\
ft_lstadd_front_bonus.c\
ft_lstsize_bonus.c\
ft_lstlast_bonus.c\
ft_lstadd_back_bonus.c\
ft_lstdelone_bonus.c\
ft_lstclear_bonus.c\
ft_lstiter_bonus.c\
ft_lstmap_bonus.c






BO_FILES = $(B_FILES:.c=.o)

#Change the .c extension in .o extension
O_FILES = $(C_FILES:.c=.o)

# ----------------------------------------------- #
#---------------- COLORES ------------------------#
#-------------------------------------------------# 
RED = $(shell tput setaf 1)
GREEN= $(shell tput setaf 2)
RESET = $(shell tput sgr0)
COLOUR_MAGENTA= $(shell tput setaf 5)


all: header $(NAME)

header :
	@echo "$(COLOUR_MAGENTA)"
	@echo "/*  ██████   ██████              █████  █████ ████   ███                           */"
	@echo "/* ░░██████ ██████              ░░███  ░░███ ░░███  ░░░                            */"
	@echo "/*  ░███░█████░███  ████████     ░███   ░███  ░███  ████   █████   ██████   █████  */"
	@echo "/*  ░███░░███ ░███ ░░███░░███    ░███   ░███  ░███ ░░███  ███░░   ███░░███ ███░░   */"
	@echo "/*  ░███ ░░░  ░███  ░███ ░░░     ░███   ░███  ░███  ░███ ░░█████ ░███████ ░░█████  */"
	@echo "/*  ░███      ░███  ░███         ░███   ░███  ░███  ░███  ░░░░███░███░░░   ░░░░███ */"
	@echo "/*  █████     █████ █████        ░░████████   █████ █████ ██████ ░░██████  ██████  */"
	@echo "/* ░░░░░     ░░░░░ ░░░░░          ░░░░░░░░   ░░░░░ ░░░░░ ░░░░░░   ░░░░░░  ░░░░░░   */"
	@echo "$(RESET)"
	@echo " Project: $(NAME) $(GREEN)"
	@echo " Author: ucabanil"

#-------------------------------------------------#
#---------------- GENERACION ---------------------#
#-------------------------------------------------#

# Line that generate .o files
%.o: %.c
	$(info $(GREEN) [OK] $(RESET) $< -> $@ )
	@$(CC) $(CCFLAGS) -c $< -o $@
	
# Generate library
$(NAME): $(O_FILES) #$(BO_FILES) 
	$(info $(GREEN) [OK] Generating $(NAME) $(RESET))
	@ar rcs $(NAME) $(O_FILES) 

#-------------------------------------------------#
#---------------- RULES --------------------------#
#-------------------------------------------------#
clean:
	$(info $(RED)[-] Cleaning... $(RESET))
	@rm -f $(O_FILES) $(BO_FILES)

bonus: $(O_FILES) $(BO_FILES)
	$(info $(GREEN) [OK] Generating $(NAME) $(RESET))
	@ar rcs $(NAME) $(O_FILES) $(BO_FILES)
	@ranlib $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)

.PHONY: fclean clean re bonus
