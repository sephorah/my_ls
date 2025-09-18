/*
** EPITECH PROJECT, 2022
** display_file_type.c
** File description:
** my_ls
*/

#include "my.h"

void display_file_type(mode_t mode)
{
    char file_type = return_file_type(mode);
    my_printf("%c", file_type);
}
