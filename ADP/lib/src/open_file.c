/*
** PERSONAL PROJECT, 2022
** ADP
** File description:
** open_file
*/
#include "../include/lib.h"

char *open_file(char *file) {
    int fd;
    struct stat buff;
    int len;
    stat(file, &buff);
    char *buffer = malloc(sizeof(char) * (buff.st_size + 1));

    fd = open(file, O_RDONLY);
    len = read(fd, buffer, buff.st_size);
    buffer[len] = 0;
    return (buffer);
}
