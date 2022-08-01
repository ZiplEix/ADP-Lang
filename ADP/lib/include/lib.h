/*
** PERSONAL PROJECT, 2022
** 42sh
** File description:
** lib
*/

#ifndef LIB_H_
    #define LIB_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>

int search_index_char(char *str, char c);
char *open_file(char *file);

#endif /* !LIB_H_ */
