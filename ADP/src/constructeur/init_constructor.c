/*
** EPITECH PROJECT, 2022
** ADP
** File description:
** init_constructor
*/
#include "adp.h"

void init_constructeur(constructeur *c)
{
    c->char_type = ASCII;

    c->autorized_params = NULL;

    c->affichage_desciption = TRUE;
    c->description = NULL;

    c->auto_fonction = TRUE;

    c->precised_start = FALSE;
    c->start = "main.adp";
}
