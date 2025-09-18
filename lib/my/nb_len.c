/*
** EPITECH PROJECT, 2022
** nb_len.c
** File description:
** my_ls
*/

#include "my.h"

int nb_len(int nb)
{
    int p = 0;
    int nb_digits = 0;
    if (nb == 0){
        return 1;
    }
    while (nb >= my_pow_10(p)){
        nb_digits += 1;
        p += 1;
    }
    return nb_digits;
}
