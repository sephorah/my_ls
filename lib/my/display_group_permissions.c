/*
** EPITECH PROJECT, 2022
** display_group_permissions.c
** File description:
** my_ls
*/

#include "my.h"

void display_group_permissions(mode_t mode)
{
    if (mode & S_IRGRP){
        my_printf("r");
    } else {
        my_printf("-");
    }
    if (mode & S_IWGRP){
        my_printf("w");
    } else {
        my_printf("-");
    }
    if (mode & S_IXGRP){
        my_printf("x");
    } else {
        my_printf("-");
    }
}
