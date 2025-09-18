/*
** EPITECH PROJECT, 2022
** is_alpha.c
** File description:
** is_alpha.c
*/

int is_alpha(char c)
{
    if (c >= 65 && c <= 90){
        return 1;
    } else if (c >= 97 && c <= 122){
        return 1;
    }
    return 0;
}
