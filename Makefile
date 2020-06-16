# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seukim <seukim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/14 22:09:26 by seukim            #+#    #+#              #
#    Updated: 2020/06/14 22:09:26 by seukim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS = ft_strlen.s \
		ft_strcpy.s \
		ft_strcmp.s \
		ft_write.s \
		ft_read.s \
		ft_strdup.s

OBJS =		$(SRCS:.s=.o)
NASM = NASM
LINC = ar -rcs

.s.o:
	${NASM} -lc -f macho64 $< -o $@

$(NAME): ${OBJS}
		${LINC} $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -rf  $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
