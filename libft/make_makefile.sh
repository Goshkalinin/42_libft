#!/bin/bash
# chmod +x make_makefile.sh
# ./make_makefile.sh

name=libft

############################################################### CREATE FILE ####
# create Makefile; set 42 header
> Makefile
cat makefile_42header.txt >> Makefile
echo "" >> Makefile

# set NAME
echo NAME = $name.a >> Makefile

# set HEADer
echo HEAD = $name.h >> Makefile

########################################################## SET COMPILE PREF ####
# set compiler
echo CC = gcc >> Makefile

# set flags
echo FLAGS = -Wall -Wextra -Werror >> Makefile
echo "" >> Makefile
############################################################## SET RESORCES ####
# set SRC
# 42 norms prohibit "*.c" notation, so we cant use &(widlcard *.c)			:-(
# ...but we can write shell-script											:-)
echo -n SRC =  >> Makefile
for item in $(find *.c); do echo -e "\t$item\t"'\' >> Makefile; done
echo "" >> Makefile

# set OBJ
echo -n OBJ = >> Makefile
for item in $(find *.c); do echo -e "\t$item\t"'\' | sed "s/\.c/\.o/" >> Makefile; done
echo "" >> Makefile

################################################################################
# make librery
echo '$(NAME) : $(OBJ)' >> Makefile
echo -e '\tar rcs $(NAME) $(OBJ)' >> Makefile

# make object files
echo '$(OBJ) : $(SRC)' >> Makefile
echo -e '\t$(CC) -c $(FLAGS) $(SRC)' >> Makefile

echo "" >> Makefile
#################################################################### .PHONY ####
# set phony targets
echo ".PHONY: all clean fclean re" >> Makefile

# set all
echo 'all : $(NAME)' >> Makefile

# set clean
# (we use ordinary quotes istead double, coze they turn vars into plane txt))
# clean uses for remove objects file
echo -e 'clean :\n\trm -f $(OBJ)' >> Makefile

# set fclean
# fclean (full?) removes object files + executable (or whatever)
echo -e 'fclean : clean' >> Makefile
echo -e '\trm -f $(NAME)' >> Makefile

# set re
# re is for REbuild
echo 're : fclean all' >> Makefile


