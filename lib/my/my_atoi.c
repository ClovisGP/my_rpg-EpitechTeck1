/*
** EPITECH PROJECT, 2019
** atoi
** File description:
** str to int
*/
int my_strlen(char *str);

int my_atoi(char *str)
{
    int number = 0;
    int multiple = 1;
    int compteur = my_strlen(str) - ((str[0] != '-') ? 0 : 1);
    int i = 0;
    int comp = 0;

    while (++i <= compteur)
        multiple = multiple * 10;
    while (multiple > 1) {
        if (str[comp] != '-') {
            number = (str[comp] - 48) * multiple + number;
            multiple = multiple / 10;
        }
        comp = comp + 1;
    }
    if (str[0] == '-')
        number = (number * (-1));
    number = number / 10;
    return (number);
}
