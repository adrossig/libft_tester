#!/bin/bash

######################
## PATHS #############
######################

LIBFT=../libft
ORIGIN=$(echo `pwd`)

######################
## COMPILER ##########
######################

CFLAGS=-Werror -Wall -Wextra -g -fsanitize=address

######################
## TEXTS ############
######################

RED="\033[31m"
TEXT="\033[3;37m"
TITLE="\033[5;36m"

######################
## TITLES ############
######################

FRAME="++++++++++++++++++++++++++\n"
T_LCLEAN="${TITLE}${FRAME}++ Cleaning Library ++++++\n${FRAME}${TEXT}"
T_MBONUS="${TITLE}${FRAME}++ Making Bonuses ++++++++\n${FRAME}${TEXT}"
T_OCLEAN="${TITLE}${FRAME}++ Cleaning -.o ++++++++++\n${FRAME}${TEXT}"
T_TEST1="${TITLE}${FRAME}++ PART 2 ++++++++++++++++\n${FRAME}${TEXT}"
T_TEST2="${TITLE}${FRAME}++ BONUS +++++++++++++++++\n${FRAME}${TEXT}"

######################
## SCRIPT ############
######################

clear
cd ${LIBFT}
echo -e ${T_LCLEAN}; make fclean
echo -e "\n"${T_MBONUS}; make all; make bonus
echo -e "\n"${T_OCLEAN}; make clean
cd ${ORIGIN}
echo -e "\n"${T_TEST1}; gcc test_part2.c ${LIBFT}/libft.a ${CFLAGS}; ./a.out
echo -e ${T_TEST2}; gcc test_bonus.c ${LIBFT}/libft.a ${CFLAGS}; ./a.out
rm a.out
