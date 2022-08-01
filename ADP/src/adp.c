/*
** PERSONAL PROJECT, 2022
** ADP-Lang
** File description:
** adp
*/
#include "../include/adp.h"

void init_constructeur(constructeur *c) {
    char *str = open_file("test.txt");
    printf("%s\n", str);
}

int adp(int argc, char **argv)
{
    constructeur *c = malloc(sizeof(constructeur));
    init_constructeur(c);
    return 0;
}
