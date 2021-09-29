/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** prototype
*/
#include <stdlib.h>
#include <unistd.h>
void my_putchar(char c);
void my_put_nbr(int nb);
void my_put_float(double nb);
int my_putstr(char const *str);
int my_printf(char *expr, ...);
int my_atoi(char *str);
int my_strlen(char const *str);
char *my_revstr(char *str);
void my_put_board(char **board);
int my_leng_of_int(int nb);
char *my_strcpy(char *src);
int my_getnbr(char *str);
char **my_splite(char car, char *str);
char *my_strcat(char *one, char *two);
int my_strcmpn(char *one, char *two, int n);
char *my_int_to_str(int nb);

void my_puter(char c);
void my_putstr_er(char *str);
void my_putstr_er_nc(char *str, char c);
void my_putnber(int nb);
void my_putstr_nc(char *str, char c);
void my_put_nbrstr(int nb, char *str);
char *my_strdup(char const *src);