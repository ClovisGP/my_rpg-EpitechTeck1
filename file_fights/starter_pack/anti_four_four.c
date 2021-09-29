/*
** EPITECH PROJECT, 2019
** starter_pack
** File description:
** anti_four_four.c
*/

char *anti_four_four(void)
{
    size_t size = 64;
    int read_cmp;
    char *buff;

    buff = malloc(size * sizeof(char));
    if (!buff) return (NULL);
    read_cmp = getline(&buff, &size, stdin);
    if (read_cmp < 0) {
        free(buff);
        return (NULL);
    }
    buff[read_cmp - 1] = '\0';
    return (buff);
}