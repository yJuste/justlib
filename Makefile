NAME = libjust.a

# Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror # -g

# Directories
SRC_DIR = src
INC_DIR = inc
OBJ_DIR = obj

# Files
SRC =	string/ft_is_separator.c		\
	string/ft_strlen.c			\
	string/ft_count_chr.c			\
	string/ft_strdup.c			\
	string/ft_delchrs.c			\
	string/ft_strcpy.c			\
	string/ft_strncpy.c			\
	string/ft_replace_chr.c			\
	string/ft_strchr.c			\
	string/ft_strrchr.c			\
	string/ft_strstr.c			\
	string/ft_strrstr.c			\
	string/ft_next_chr.c			\
	string/ft_strcmp.c			\
	string/ft_strncmp.c			\
	string/ft_strjoin.c			\
	array/ft_strslen.c			\
	array/ft_strsdup.c			\
	array/ft_delstrs.c			\
	array/ft_strscpy.c			\
	array/ft_next_str.c			\
	array/ft_interversion.c			\
	array/ft_shift.c			\
	array/ft_strs_push.c			\
	array/ft_split.c			\
	array/ft_strsjoin.c			\
	array/ft_sort_chr_tab.c			\
	array/ft_print_args.c			\
	conversion/ft_atoi.c			\
	conversion/ft_itoa.c			\
	memory/ft_calloc.c			\
	memory/ft_realloc.c			\
	memory/ft_free_array.c			\
	memory/ft_free.c			\
	memory/ft_memcpy.c			\
	lst/ft_lstnew.c				\
	lst/ft_lstadd_front.c			\
	lst/ft_lstadd_back.c			\
	lst/ft_lstsize.c			\
	lst/ft_lstlast.c			\
	lst/ft_lstiter.c			\
	lst/ft_lstmap.c				\
	lst/ft_lstprint.c			\
	lst/ft_lstclear.c			\
	lst/ft_lstdelone.c			\
	get_next_line/get_next_line.c

# Colors
RESET			= "\033[0m"
GREEN			= "\033[32m"	# Green
RED			= "\033[91m"	# Red
YELLOW			= "\033[33m"	# Yellow


# Rules
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

all: credit $(NAME)
	@echo $(GREEN)"--- 🎊 La justlib has been created. 🎊 ---"$(RESET)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)
	@echo $(RED)"--- 📍 La justlib has been deleted. 📍 ---"$(RESET)

re: fclean all

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

# My rules
credit:
	@echo $(YELLOW)
	@echo ".---------------------------------------------------------."
	@echo "|          🎉  Merci d'utiliser la justlib. 🎉            |"
	@echo "|                                                         |"
	@echo "| * Si vous rencontrez une erreur, veuillez ouvrir une    |"
	@echo "|   'pull request', ceci me permettrait de l'améliorer    |"
	@echo "|   dans le futur, merci. 😁                              |"
	@echo "|                                                         |"
	@echo "| EOF:                                                    |"
	@echo "| Dernière modification le 7 Avril 2025 par Juste.        |"
	@echo ".---------------------------------------------------------."
	@echo $(RESET)
rf: re
	rm -rf $(OBJ_DIR)
	rm -f $(NAME)

swp:
	find . -type f -name ".*.swp" -exec rm -f {} \;
	find . -type f -name ".*.swo" -exec rm -f {} \;

sub:
	git submodule update --init --recursive --remote

s:
	ls -lh $(NAME)

.PHONY: all clean fclean re credit rf s
