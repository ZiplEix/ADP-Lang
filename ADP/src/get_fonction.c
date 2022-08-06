/*
** EPITECH PROJECT, 2022
** ADP
** File description:
** get_fonction
*/
#include "adp.h"

void get_all_fonction(constructeur *c)
{
    DIR *d;
    struct dirent *dir;
    int nb_fonction = 0;

    d = opendir("./fonctions");
    if (d) {
        while ((dir = readdir(d)) != NULL) {
            printf("%s\n", dir->d_name);
            nb_fonction++;
        }
        closedir(d);
    }
}