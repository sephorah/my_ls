/*
** EPITECH PROJECT, 2022
** handle_a.c
** File description:
** my_ls
*/

#include "my.h"

int handle_a_dir(char const *pathname)
{
    DIR *dir = opendir(pathname);
    struct stat statbuf;
    struct dirent *entry = readdir(dir);
    char *entry_name;
    int i = 0;

    while (entry != NULL){
        entry_name = entry->d_name;
        my_printf("%s\n", entry_name);
        entry = readdir(dir);
    }
    closedir(dir);
}

int handle_a(char const *pathname)
{
    int is_valid = check_pathname(pathname);
    struct stat statbuf;

    if (is_valid == 84){
        return 84;
    }
    if (is_valid == 1){
        handle_a_dir(pathname);
    }
    if (is_valid == 2){
        my_printf("%s\n", pathname);
    }
}
