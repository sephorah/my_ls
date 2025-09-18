/*
** EPITECH PROJECT, 2022
** display_total_blocks.c
** File description:
** my_ls
*/

#include "my.h"

void display_total_blocks(char const *pathname)
{
    DIR *dir = opendir(pathname);
    struct dirent *entry = readdir(dir);
    struct stat statbuf;
    char *entry_name = entry->d_name;
    char *entry_path = get_relative_path(entry_name, pathname);
    int total = 0;

    while (entry != NULL){
        entry_name = entry->d_name;
        entry_path = get_relative_path(entry_name, pathname);
        if (entry_name[0] != '.'){
            lstat(entry_path, &statbuf);
            total += statbuf.st_blocks;
        }
        entry = readdir(dir);
    }
    my_printf("total %d\n", total / 2);
    closedir(dir);
}
