/*
** EPITECH PROJECT, 2022
** ADP
** File description:
** constructeur
*/
#include "adp.h"

void error_constructor_file(char *constructeur)
{
    if (open(constructeur, O_RDONLY) == -1) {
       printf("%s: No such file or directory\n", constructeur);
       exit(1);
    }
}

int exec_constructeur(constructeur *c, char *constructeur, int argc, fonctions *f)
{
    error_constructor_file(constructeur);
    init_constructeur(c);
    char *construct = open_file(constructeur);
    set_constructeur(c, construct);
    set_fonctions(f, construct);
    free(construct);
}
