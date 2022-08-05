/*
** EPITECH PROJECT, 2022
** ADP
** File description:
** constructeur
*/

#ifndef CONSTRUCTEUR_H_
    #define CONSTRUCTEUR_H_

    #define ASCII 0
    #define UNICODE 1
    #define UTF8 2
    #define UTF16 3
    #define EXTENDED_ASCII 4

typedef struct constructeur_s {
    int char_type;
    int *autorized_params;

    int affichage_desciption;
    char *description;

    int auto_fonction;
    char **fonction;

    int precised_start;
    char *start;

} constructeur;

#endif /* !CONSTRUCTEUR_H_ */
