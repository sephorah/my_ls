/*
** EPITECH PROJECT, 2022
** display_other_permissions.c
** File description:
** my_ls
*/

#include "my.h"

void display_other_permissions(mode_t mode)
{
    if (mode & S_IROTH){
        my_printf("r");
    } else {
        my_printf("-");
    }
    if (mode & S_IWOTH){
        my_printf("w");
    } else {
        my_printf("-");
    }
    if (mode & S_IXOTH){
        my_printf("x");
    } else {
        my_printf("-");
    }
    my_printf(" ");
}
