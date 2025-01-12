NAME		:=	algo-practice
SRC_FILES	:=	binary_operations inary_search insertion_sort linear_search main
SRC_DIR		:=	src
SRC			:=	$(addprefix $(SRC_DIR)/,$(addsuffix .c,$(SRC_FILES)))
OBJ_DIR		:=	obj
OBJ			:=	$(addprefix $(OBJ_DIR)/,$(addsuffix .o,$(SRC_FILES)))
CC			:=	cc
CCFLAGS		:=	-Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CCFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c Makefile include/algos.h $(OBJ_DIR)
				$(CC) $(CCFLAGS) -c $< -o $@

$(OBJ_DIR):
				mkdir $(OBJ_DIR)

clean:
				rm -rf $(OBJ_DIR)

fclean:			clean
				rm $(NAME)

re:				fclean all

.PHONY: all clean fclean re