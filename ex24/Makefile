# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaacosta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/13 12:37:02 by jaacosta          #+#    #+#              #
#    Updated: 2024/09/13 12:37:04 by jaacosta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nombre de la Libreria
NAMELIB = libft.a

#Compilador y banderas que usaremos
CC = cc
CFLAGS = -Wall -Wextra -Werror 
INCLUDES = -Iincludes

#Declaracion nombres de variables para usar en las reglas, AR crear archivos .a, RM para remover 
AR = ar -rcs
RM = rm -rf

#Directorios 
SRC = srcs
OBJ = $(SRC)

#archivos .c que usaremos
SRC_FILES= $(SRC)/ft_putchar.c $(SRC)/ft_putstr.c $(SRC)/ft_strcmp.c \
	   $(SRC)/ft_strlen.c $(SRC)/ft_swap.c
#archivos que se crean iran en el directorio	
OBJ_FILES= $(SRC:.c=.o)

#Creando y ejecutando las ru	   
all : $(NAMELIB)

$(NAMELIB) : $(OBJS)
	$(AR) $(NAMELIB) $(OBJS)
	
#$(OBJ)/%.o: $(SRC/)%.c $(INCLUDES)
#	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	
clean :
	$(RM) $(OBJS) $(OBJ_FILES)

fclean :
	$(RM) $(NAMELIB) $(OBJS) $(OBJ_FILES) 

re :
	$(RM) $(NAMELIB) $(OBJS)
	make all
