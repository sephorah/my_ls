/*
** EPITECH PROJECT, 2022
** my_basic_ls.c
** File description:
** my_ls
*/

#include "my.h"

int my_basic_ls(char const *pathname)
{
    DIR *dir = opendir(pathname);
    struct dirent *entry = readdir(dir);
    char *entry_name;
    int i = 0;

    while (entry != NULL){
        entry_name = entry->d_name;
        if (entry_name[0] != '.'){
            my_printf("%s\n", entry_name);
        }
        entry = readdir(dir);
    }
    closedir(dir);
}

int handle_basic_ls(char const *pathname)
{
    int is_valid = check_pathname(pathname);
    struct stat statbuf;

    if (is_valid == 84){
        return 84;
    }
    if (is_valid == 1){
        my_basic_ls(pathname);
    }
    if (is_valid == 2){
        my_printf("%s\n", pathname);
    }
}
