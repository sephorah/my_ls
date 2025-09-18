/*
** EPITECH PROJECT, 2022
** get_relative_path.c
** File description:
** my_ls
*/

#include "my.h"

char *get_relative_path(char *filename, char const *dir)
{
    int f_len = my_strlen(filename);
    int dir_len = my_strlen(dir);
    char *res = malloc(sizeof(char) * (f_len + dir_len + 2));

    res[0] = '\0';
    res = my_strcat(res, dir);
    if (dir[f_len - 1] != '/'){
        res = my_strcat(res, "/");
    }
    res = my_strcat(res, filename);
    return res;
}
