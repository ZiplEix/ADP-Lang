/*
** PERSONAL PROJECT, 2022
** ADP-Lang
** File description:
** main
*/
#include "adp.h"

int main(int argc, char *argv[])
{
    if (argc <= 1) {
        printf("error : no constructor precised\n");
        exit(1);
    }

    return adp(argc, argv);
}

