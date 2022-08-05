/*
** PERSONAL PROJECT, 2022
** Desktop
** File description:
** stockage
*/

#ifndef STOCKAGE_H_
    #define STOCKAGE_H_

    #define TYPE_INT 0
    #define TYPE_FLOAT 1
    #define TYPE_STRING 2
    #define TYPE_BOOL 3
    #define TYPE_CHAR 4

typedef struct contenue_s {
    char data;
    struct caractere_s *next;
    struct caractere_s *previous;
} contenue;

typedef struct variable_s {
    int type;
    int constante;
    contenue *c;
    struct variable_s *next;
} variables;

typedef struct loop_s {
    char *condition;
    variables *var;
    struct loop_s *loop;
    struct loop_s *next;
} loop;

typedef struct fonction_s {
    char *name;
    int fd;
    char *content;
    variables *var;
    loop *loop;
    struct fonction_s *next;
} fonctions;

#endif /* !STOCKAGE_H_ */
