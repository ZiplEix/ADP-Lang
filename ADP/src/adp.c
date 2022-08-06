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
    free(c->start);
}

void free_fonctions(fonctions *f)
{
    fonctions *tmp = f;

    while (f != NULL) {
        tmp = f;
        f = f->next;
        free(tmp->content);
        free(tmp);
    }
}

int adp(int argc, char **argv)
{
    constructeur *c = malloc(sizeof(constructeur));
    fonctions *f = malloc(sizeof(fonctions));

    exec_constructeur(c, argv[1], argc, f);

    free(c->autorized_params);
    free(c);
    free_fonctions(f);
    return 0;
}
