/*
** EPITECH PROJECT, 2022
** my_pow_10.c
** File description:
** my_ls
*/

long int my_pow_10(int power)
{
    int i = 0;
    long int result = 1;
    while (i < power){
        result *= 10;
        i += 1;
    }
    return result;
}
