/*
** EPITECH PROJECT, 2022
** ADP
** File description:
** set_constructeur
*/

#include "adp.h"

void set_car_type(constructeur *c, char *value)
{
    if (strncmp(value, "ASCII", 5) == 0)
        c->char_type = ASCII;
    else if (strncmp(value, "UNICODE", 7) == 0)
        c->char_type = UNICODE;
    else if (strncmp(value, "UTF8", 4) == 0)
        c->char_type = UTF8;
    else if (strncmp(value, "UTF16", 5) == 0)
        c->char_type = UTF16;
    else if (strncmp(value, "EXTENDED_ASCII", 14) == 0)
        c->char_type = EXTENDED_ASCII;
    else
        printf("%s: Wrong value for \"CAR-TYPE\"\n", value);
}

void set_nb_param(constructeur *c, char *value)
{
    char **tmp = split(value, ',');
    int i = 0;

    while (tmp[i])
        i++;

    c->autorized_params = malloc(sizeof(int) * i);

    for (int j = 0; j < i; j++) {
        c->autorized_params[j] = atoi(tmp[j]);
        free(tmp[j]);
    }
    free(tmp);
}

void set_affichage_description(constructeur *c, char *value)
{
    if (strncmp(value, "TRUE", 4) == 0)
        c->affichage_desciption = TRUE;
    else if (strncmp(value, "FALSE", 5) == 0)
        c->affichage_desciption = FALSE;
    else
        printf("%s: Wrong value for \"AFFICHAGE-DESCRIPTION\"\n", value);
}

void set_description(constructeur *c, char *value)
{
    if (c->affichage_desciption == TRUE)
        c->description = value;
}

void set_auto_fonction(constructeur *c, char *value)
{
    if (strncmp(value, "TRUE", 4) == 0) {
        c->auto_fonction = TRUE;
    } else if (strncmp(value, "FALSE", 5) == 0)
        c->auto_fonction = FALSE;
    else
        printf("%s: Wrong value for \"AUTO-FONCTION\"\n", value);
}

void set_depart(constructeur *c, char *value)
{
    c->precised_start = TRUE;
    if (open(value, O_RDONLY) == -1) {
        printf("%s: No such file or directory for start the programme\n", value);
        exit(1);
    } else {
        c->start = value;
    }
}

void set_param_constructeur(char *line, constructeur *c)
{
    char *param = strtok(line, "=");
    char *value = strtok(NULL, "=");

    if (strcmp(param, "CAR-TYPE") == 0) {
        set_car_type(c, value);
    } else if (strcmp(param, "NB-PARAM") == 0) {
        set_nb_param(c, value);
    } else if (strcmp(param, "AFFICHER-DESCRIPTION") == 0) {
        set_affichage_description(c, value);
    } else if (strcmp(param, "DESCRIPTION") == 0) {
        set_description(c, value);
    } else if (strcmp(param, "DEPART") == 0)
        set_depart(c, value);
    else if (strcmp(param, "AUTO-FONCTION") == 0)
        set_auto_fonction(c, value);
}

void set_constructeur(constructeur *c, char *constructeur)
{
    char **tab_constructeur = split(constructeur, '\n');
    int i = 0;

    while (tab_constructeur[i]) {
        if (strncmp(tab_constructeur[i], "//", 2) == 0 || strcmp(tab_constructeur[i], "") == 0) {
            free(tab_constructeur[i]);
            i++;
            continue;
        }
        set_param_constructeur(tab_constructeur[i], c);
        free(tab_constructeur[i]);
        i++;
    }
    free(tab_constructeur);
}