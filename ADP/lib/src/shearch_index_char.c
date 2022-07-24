/*
** PERSONAL PROJECT, 2022
** ADP-Lang
** File description:
** shearch_index_char
*/

int search_index_char(char *str, char c)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == c)
            return (i);
        i++;
    }
    return (-1);
}
