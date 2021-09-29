/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** display int
*/
#include <stdlib.h>
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);

void my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar(45);
        nb = nb * -1;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + 48);
    }
    if (nb < 10)
        my_putchar(nb + 48);
}

void my_put_float(double nbr)
{
    int temp = nbr;
    int div = 1;
    if (temp < 0){
        my_putchar('-');
        temp = -temp;
    }
    while (temp / div > 9 || temp / div < -9) div *= 10;
    while (div >= 1){
        my_put_nbr((temp / div) % 10);
        div /= 10;
    }
    my_putchar('.');
    temp = nbr * 100;
    my_put_nbr((temp / 10) % 10);
    my_put_nbr((temp / 1) % 10);
}