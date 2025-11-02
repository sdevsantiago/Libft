# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sede-san <sede-san@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/03 19:12:48 by sede-san          #+#    #+#              #
#    Updated: 2025/11/02 21:53:09 by sede-san         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ******************************* Output files ******************************* #

NAME		= libft.a

# ************************** Compilation variables *************************** #

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
HEADERS	= -I $(INCLUDE_PATH)				\
	-I $(CHECKS_PATH)						\
	-I $(DATA_STRUCTURES_PATH)				\
	-I $(LINKED_LISTS_PATH)					\
	-I $(CIRCULAR_DOUBLY_LINKED_LIST_PATH)	\
	-I $(CIRCULAR_SINGLY_LINKED_LIST_PATH)	\
	-I $(DOUBLY_LINKED_LIST_PATH)			\
	-I $(SINGLY_LINKED_LIST_PATH)			\
	-I $(MEMORY_PATH)						\
	-I $(NUMBERS_PATH)						\
	-I $(PRINT_PATH)						\
	-I $(STRINGS_PATH)

ifeq ($(DEBUG), lldb) # debug with LLDB
	CFLAGS	+= -g3
else ifeq ($(DEBUG), valgrind) # debug with valgrind
	CFLAGS	+= -g3
else ifeq ($(DEBUG), address) # use AdressSanitize
	CFLAGS	+= -fsanitize=address -g3
else # apply optimization flags if no debugging is being done
	CFLAGS	+= -O3
endif

MAKE	+= --no-print-directory

# ****************************** Source files ******************************** #

SRC_PATH	= src
SRC			=				\
	$(CHECKS_SRC)			\
	$(CONVERSIONS_SRC)		\
	$(DATA_STRUCTURES_SRC)	\
	$(MEMORY_SRC)			\
	$(NUMBERS_SRC)			\
	$(PRINT_SRC)			\
	$(STRINGS_SRC)

CHECKS_PATH	= $(SRC_PATH)/checks
CHECKS_SRC	= 					\
	$(CHECKS_PATH)/ft_isalnum.c	\
	$(CHECKS_PATH)/ft_isalpha.c	\
	$(CHECKS_PATH)/ft_isascii.c	\
	$(CHECKS_PATH)/ft_iscntrl.c	\
	$(CHECKS_PATH)/ft_isdigit.c	\
	$(CHECKS_PATH)/ft_islower.c	\
	$(CHECKS_PATH)/ft_isprint.c	\
	$(CHECKS_PATH)/ft_isspace.c	\
	$(CHECKS_PATH)/ft_isupper.c

CONVERSIONS_PATH	= $(SRC_PATH)/conversions
CONVERSIONS_SRC		= 					\
	$(CONVERSIONS_PATH)/ft_atoi_base.c	\
	$(CONVERSIONS_PATH)/ft_atoi.c 		\
	$(CONVERSIONS_PATH)/ft_atol.c 		\
	$(CONVERSIONS_PATH)/ft_itoa_base.c 	\
	$(CONVERSIONS_PATH)/ft_itoa.c 		\
	$(CONVERSIONS_PATH)/ft_ltoa.c 		\
	$(CONVERSIONS_PATH)/ft_tolower.c	\
	$(CONVERSIONS_PATH)/ft_toupper.c	\
	$(CONVERSIONS_PATH)/ft_uitoa_base.c	\
	$(CONVERSIONS_PATH)/ft_uitoa.c		\
	$(CONVERSIONS_PATH)/ft_ultoa_base.c	\

DATA_STRUCTURES_PATH	= $(SRC_PATH)/data_structures
DATA_STRUCTURES_SRC		= $(LINKED_LISTS_SRC)

LINKED_LISTS_PATH	= $(DATA_STRUCTURES_PATH)/linked_lists
LINKED_LISTS_SRC	= 					\
	$(CIRCULAR_DOUBLY_LINKED_LIST_SRC)	\
	$(CIRCULAR_SINGLY_LINKED_LIST_SRC)	\
	$(DOUBLY_LINKED_LIST_SRC)			\
	$(SINGLY_LINKED_LIST_SRC)

CIRCULAR_DOUBLY_LINKED_LIST_PATH	= $(LINKED_LISTS_PATH)/circular_doubly_linked_list
CIRCULAR_DOUBLY_LINKED_LIST_SRC		= \
	$(CIRCULAR_DOUBLY_LINKED_LIST_PATH)/ft_cdlstadd_back.c	\
	$(CIRCULAR_DOUBLY_LINKED_LIST_PATH)/ft_cdlstadd_front.c	\
	$(CIRCULAR_DOUBLY_LINKED_LIST_PATH)/ft_cdlstclear.c		\
	$(CIRCULAR_DOUBLY_LINKED_LIST_PATH)/ft_cdlstdelone.c	\
	$(CIRCULAR_DOUBLY_LINKED_LIST_PATH)/ft_cdlstiter.c		\
	$(CIRCULAR_DOUBLY_LINKED_LIST_PATH)/ft_cdlstlast.c		\
	$(CIRCULAR_DOUBLY_LINKED_LIST_PATH)/ft_cdlstmap.c		\
	$(CIRCULAR_DOUBLY_LINKED_LIST_PATH)/ft_cdlstnew.c		\
	$(CIRCULAR_DOUBLY_LINKED_LIST_PATH)/ft_cdlstsize.c

CIRCULAR_SINGLY_LINKED_LIST_PATH	= $(LINKED_LISTS_PATH)/circular_singly_linked_list
CIRCULAR_SINGLY_LINKED_LIST_SRC		= \
	$(CIRCULAR_SINGLY_LINKED_LIST_PATH)/ft_clstadd_back.c	\
	$(CIRCULAR_SINGLY_LINKED_LIST_PATH)/ft_clstadd_front.c	\
	$(CIRCULAR_SINGLY_LINKED_LIST_PATH)/ft_clstclear.c		\
	$(CIRCULAR_SINGLY_LINKED_LIST_PATH)/ft_clstdelone.c		\
	$(CIRCULAR_SINGLY_LINKED_LIST_PATH)/ft_clstiter.c		\
	$(CIRCULAR_SINGLY_LINKED_LIST_PATH)/ft_clstlast.c		\
	$(CIRCULAR_SINGLY_LINKED_LIST_PATH)/ft_clstmap.c		\
	$(CIRCULAR_SINGLY_LINKED_LIST_PATH)/ft_clstnew.c		\
	$(CIRCULAR_SINGLY_LINKED_LIST_PATH)/ft_clstsize.c

DOUBLY_LINKED_LIST_PATH	= $(LINKED_LISTS_PATH)/doubly_linked_list
DOUBLY_LINKED_LIST_SRC	= 							\
	$(DOUBLY_LINKED_LIST_PATH)/ft_dlstadd_back.c	\
	$(DOUBLY_LINKED_LIST_PATH)/ft_dlstadd_front.c	\
	$(DOUBLY_LINKED_LIST_PATH)/ft_dlstclear.c		\
	$(DOUBLY_LINKED_LIST_PATH)/ft_dlstdelone.c		\
	$(DOUBLY_LINKED_LIST_PATH)/ft_dlstiter.c		\
	$(DOUBLY_LINKED_LIST_PATH)/ft_dlstlast.c		\
	$(DOUBLY_LINKED_LIST_PATH)/ft_dlstmap.c			\
	$(DOUBLY_LINKED_LIST_PATH)/ft_dlstnew.c			\
	$(DOUBLY_LINKED_LIST_PATH)/ft_dlstsize.c

SINGLY_LINKED_LIST_PATH	= $(LINKED_LISTS_PATH)/singly_linked_list
SINGLY_LINKED_LIST_SRC	= 							\
	$(SINGLY_LINKED_LIST_PATH)/ft_lstadd_back.c		\
	$(SINGLY_LINKED_LIST_PATH)/ft_lstadd_front.c	\
	$(SINGLY_LINKED_LIST_PATH)/ft_lstclear.c		\
	$(SINGLY_LINKED_LIST_PATH)/ft_lstdelone.c		\
	$(SINGLY_LINKED_LIST_PATH)/ft_lstiter.c			\
	$(SINGLY_LINKED_LIST_PATH)/ft_lstlast.c			\
	$(SINGLY_LINKED_LIST_PATH)/ft_lstmap.c			\
	$(SINGLY_LINKED_LIST_PATH)/ft_lstnew.c			\
	$(SINGLY_LINKED_LIST_PATH)/ft_lstsize.c

MEMORY_PATH	= $(SRC_PATH)/memory
MEMORY_SRC	=						\
	$(MEMORY_PATH)/ft_bzero.c		\
	$(MEMORY_PATH)/ft_calloc.c		\
	$(MEMORY_PATH)/ft_free_split.c	\
	$(MEMORY_PATH)/ft_free.c		\
	$(MEMORY_PATH)/ft_memchr.c		\
	$(MEMORY_PATH)/ft_memcmp.c		\
	$(MEMORY_PATH)/ft_memcpy.c		\
	$(MEMORY_PATH)/ft_memmove.c		\
	$(MEMORY_PATH)/ft_memset.c		\
	$(MEMORY_PATH)/ft_realloc.c		\
	$(MEMORY_PATH)/ft_swap.c

NUMBERS_PATH	= $(SRC_PATH)/numbers
NUMBERS_SRC		= 				\
	$(NUMBERS_PATH)/ft_imin.c

PRINT_PATH	= $(SRC_PATH)/print
PRINT_SRC	= 						\
	$(PRINT_PATH)/ft_eputchar.c		\
	$(PRINT_PATH)/ft_eputendl.c		\
	$(PRINT_PATH)/ft_eputnbr.c		\
	$(PRINT_PATH)/ft_eputstr.c		\
	$(PRINT_PATH)/ft_putchar_fd.c	\
	$(PRINT_PATH)/ft_putchar.c		\
	$(PRINT_PATH)/ft_putendl_fd.c	\
	$(PRINT_PATH)/ft_putendl.c		\
	$(PRINT_PATH)/ft_putnbr_fd.c	\
	$(PRINT_PATH)/ft_putnbr.c		\
	$(PRINT_PATH)/ft_putstr_fd.c	\
	$(PRINT_PATH)/ft_putstr.c

STRINGS_PATH	= $(SRC_PATH)/strings
STRINGS_SRC		=					\
	$(STRINGS_PATH)/ft_nsplit.c		\
	$(STRINGS_PATH)/ft_split.c		\
	$(STRINGS_PATH)/ft_strchr.c		\
	$(STRINGS_PATH)/ft_strcmp.c		\
	$(STRINGS_PATH)/ft_strdup.c		\
	$(STRINGS_PATH)/ft_strisnum.c	\
	$(STRINGS_PATH)/ft_striteri.c	\
	$(STRINGS_PATH)/ft_strjoin.c	\
	$(STRINGS_PATH)/ft_strlcat.c	\
	$(STRINGS_PATH)/ft_strlcpy.c	\
	$(STRINGS_PATH)/ft_strlen.c		\
	$(STRINGS_PATH)/ft_strmapi.c	\
	$(STRINGS_PATH)/ft_strncmp.c	\
	$(STRINGS_PATH)/ft_strncpy.c	\
	$(STRINGS_PATH)/ft_strnjoin.c	\
	$(STRINGS_PATH)/ft_strnstr.c	\
	$(STRINGS_PATH)/ft_strrchr.c	\
	$(STRINGS_PATH)/ft_strtrim.c	\
	$(STRINGS_PATH)/ft_substr.c

INCLUDE_PATH	= include

# ****************************** Object files ******************************** #

OBJS_PATH	= build
OBJS		= $(SRC:$(SRC_PATH)/%.c=$(OBJS_PATH)/%.o)

$(OBJS_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

# ********************************* Rules ************************************ #

all: $(NAME)
.PHONY: all

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJS_PATH)
.PHONY: clean

fclean: clean
	@rm -f $(NAME)
.PHONY: fclean

re: fclean all
.PHONY: re
