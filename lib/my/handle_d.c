/*
** EPITECH PROJECT, 2022
** handle_d.c
** File description:
** my_ls
*/

#include "my.h"

int handle_d(char const *pathname)
{
    int is_valid = check_pathname(pathname);
    struct stat statbuf;

    if (is_valid == 84){
        return 84;
    }
    if (is_valid == 1 || is_valid == 2){
        my_printf("%s\n", pathname);
    }
}
