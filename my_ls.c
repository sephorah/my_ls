/*
** EPITECH PROJECT, 2022
** my_ls.c
** File description:
** my_ls
*/

#include "my.h"

void check_option(int *options, char letter)
{
    switch (letter){
    case 'a':
        options[0] = 1;
        break;
    case 'l':
        options[1] = 1;
        break;
    case 'd':
        options[2] = 1;
    default:
        break;
    }
}

int handle_options(int *options, char const *pathname)
{
    int len = 3;
    t_handle_option options_table[] = {
        {'a', handle_a}, {'l', handle_l}, {'d', handle_d}
    };
    for (int i = 0; i < len; i += 1){
        if (options[i] == 1){
            return options_table[i].fptr(pathname);
            return 0;
        }
    }
    return handle_basic_ls(pathname);
}

int my_ls(int argc, char **argv)
{
    int *options = malloc(sizeof(int) * 3);
    char const *pathname;
    int len_pathname;
    int specific_pathname = 0;

    for (int i = 1; i < argc; i += 1){
        if (argv[i][0] == '-'){
            check_option(options, argv[i][1]);
        } else {
            len_pathname = my_strlen(argv[i]);
            specific_pathname = 1;
            pathname = malloc(sizeof(char) * (len_pathname + 1));
            pathname = argv[i];
            break;
        }
    }
    if (specific_pathname)
        return handle_options(options, pathname);
    else
        return handle_options(options, ".");
}

int main(int argc, char **argv)
{
    if (argc > 1){
        return my_ls(argc, argv);
    } else {
        return my_basic_ls(".");
    }
}
