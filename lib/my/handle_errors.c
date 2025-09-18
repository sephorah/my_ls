/*
** EPITECH PROJECT, 2022
** handle_errors.c
** File description:
** my_ls
*/

#include "my.h"

int check_pathname(char const *pathname)
{
    struct stat sb;
    int return_value_stat = lstat(pathname, &sb);

    if (return_value_stat == -1){
        return 84;
    }
    if ((sb.st_mode & S_IFMT) == S_IFDIR){
        if (opendir(pathname) == NULL){
            return 84;
        }
        return 1;
    }
    if ((sb.st_mode & S_IFMT) == S_IFREG){
        return 2;
    }
}
