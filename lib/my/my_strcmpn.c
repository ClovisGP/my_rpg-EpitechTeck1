/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** my_strcmpn.c
*/

int my_strcmpn(char *one, char *two, int n)
{
    int comp;
    int number = 0;

    for (comp = 0; one[comp] == two[comp] && comp < n; comp++)
        number = number + 1;
    if (number == n)
        return (0);
    return (1);
}