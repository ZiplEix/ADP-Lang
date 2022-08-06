/*
** PERSONAL PROJECT, 2022
** ADP-Lang
** File description:
** adp
*/
#include "../include/adp.h"

void free_constructeur(constructeur *c)
{
    free(c->autorized_params);
    free(c->description);
    free(c->fonction);
    free(c->start);
}

int adp(int argc, char **argv)
{
    constructeur *c = malloc(sizeof(constructeur));
    exec_constructeur(c, argv[1], argc);
    free(c->autorized_params);
    free(c);
    return 0;
}
