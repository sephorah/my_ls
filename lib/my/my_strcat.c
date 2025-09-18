/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** my_ls
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int dest_len = my_strlen(dest);
    int src_len = my_strlen(src) - 1;
    int i = 0;
    while (src[i] != '\0'){
        dest[dest_len + i] = src[i];
        i += 1;
    }
    dest[dest_len + i] = '\0';
    return dest;
}
