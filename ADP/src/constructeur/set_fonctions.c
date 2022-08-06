/*
** EPITECH PROJECT, 2022
** ADP
** File description:
** set_fonctions
*/
#include "adp.h"

char *clean_fonction_name(char *name)
{
    int len = strlen(name);
    name[len - 4] = '\0';
    return name;
}

void set_start_fonction(fonctions *f, char **tab_constructeur)
{
    int i = 0;
    char *param = NULL;
    char *value = NULL;

    while (strncmp(tab_constructeur[i], "DEPART=", 7) != 0)
        i++;

    param = strtok(tab_constructeur[i], "=");
    value = strtok(NULL, "=");

    if (open(value, O_RDONLY) == -1) {
        printf("%s: No such file or directory to start the programme\n", value);
        exit(1);
    }
    if (strncmp(&value[strlen(value) - 4], ".adp", 4) != 0) {
        printf("Error: %s is not a valid adp file\n", value);
        exit(1);
    }
    f->content = open_file(value);
    f->name = clean_fonction_name(value);
    f->next = NULL;
}

void set_fonctions(fonctions *f, char* construct)
{
    char **tab_constructeur = split(construct, '\n');

    set_start_fonction(f, tab_constructeur);

    int i = 0;
    while (tab_constructeur[i])
    {
        free(tab_constructeur[i]);
        i++;
    }
    free(tab_constructeur);
}