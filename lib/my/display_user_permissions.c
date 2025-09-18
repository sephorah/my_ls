/*
** EPITECH PROJECT, 2022
** display_user_permissions.c
** File description:
** my_ls
*/

#include "my.h"

void display_user_permissions(mode_t mode)
{
    if (mode & S_IRUSR){
        my_printf("r");
    } else {
        my_printf("-");
    }
    if (mode & S_IWUSR){
        my_printf("w");
    } else {
        my_printf("-");
    }
    if (mode & S_IXUSR){
        my_printf("x");
    } else {
        my_printf("-");
    }
}
