NAMEPROG	= ft_display_file
CC		= cc
CFLAGS		= -Wall -Wextra -Werror
SRCS_DIR	= srcs
SRCS		= srcs/main.c srcs/utils.c
OBJS		= $(patsubst $(SRCS_DIR)/%.c, $(SRCS_DIR)/%.o, $(SRCS))
RM		= rm -rf

all : $(NAMEPROG)

$(NAMEPROG) : $(OBJS)
	    $(CC) $(CFLAGS) $(OBJS) -o $(NAMEPROG) 

$(SRCS_DIR)/%.o : $(SRCS_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@
		  
clean :
	$(RM) $(OBJS)

fclean :
	$(RM) $(NAMEPROG)

re : fclean all

.PHONY: all clean fclean re
