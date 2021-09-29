/*
** EPITECH PROJECT, 2019
** my_leng_of_int.c
** File description:
** return the number of charactère in a int
*/

int my_leng_of_int(int nb)
{
    int comp;
    int i = 1;

    for (comp = 0; i <= nb; comp++)
        i = i * 10;
    return (comp);
}