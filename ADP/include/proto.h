/*
** PERSONAL PROJECT, 2022
** ADP-Lang
** File description:
** proto
*/

#ifndef PROTO_H_
    #define PROTO_H_

int adp(int argc, char **argv);
void init_constructeur(constructeur *c);
void set_constructeur(constructeur *c, char *constructeur);
int exec_constructeur(constructeur *c, char *constructeur, int argc);

#endif /* !PROTO_H_ */
