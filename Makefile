NAME		:=	algos.a
SRC_FILES	:=	binops/binary_operations.c \
				searching/binary_search searching/linear_search.c
SRC_DIR		:=	src
SRC			:=	$(addprefix $(SRC_DIR)/,$(addsuffix .c,$(SRC_FILES)))
OBJ_DIR		:=	obj
OBJ			:=	$(addprefix $(OBJ_DIR)/,$(addsuffix .o,$(SRC_FILES)))
CC			:=	cc
AR			:=	ar
ARFLAGS		:=	rcs
CCFLAGS		:=	-Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJ)
				$(AR) $(RCS) $(NAME) $(OBJ)

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