/*
** EPITECH PROJECT, 2019
** myPutchar
** File description:
** putchar
*/
#include <unistd.h>

void my_puter(char c)
{
    write(2, &c, 1);
}

void my_putstr_er(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_puter(str[i]);
    return;
}

void my_putstr_er_nc(char *str, char c)
{
    my_putstr_er(str);
    my_puter(c);
    return;
}

void my_putnber(int nb)
{
    if (nb < 0){
        my_puter(45);
        nb = nb * -1;
    }
    int q;
    if (nb >= 0){
        if (nb >= 10){
            q = (nb % 10);
            nb = (nb - q) / 10;
            my_putnber(nb);
            my_puter(48 + q);
        }
        else
            my_puter(48 + nb % 10);
    }
}
