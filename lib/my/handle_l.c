/*
** EPITECH PROJECT, 2022
** handle_l.c
** File description:
** my_ls
*/

#include "my.h"

int check_max(int nb1, int nb2)
{
    if (nb1 > nb2){
        return nb1;
    } else {
        return nb2;
    }
}

void display_l_format(struct stat *sb, char const *pathname)
{
    mode_t mode = sb->st_mode;

    display_file_type(mode);
    display_user_permissions(mode);
    display_group_permissions(mode);
    display_other_permissions(mode);
    my_printf("%d ", sb->st_nlink);
    display_file_and_group(sb);
    my_printf("%d ", sb->st_size);
    display_file_modif_date(sb);
    my_printf("%s\n", pathname);
}

int handle_l_dir(char const *pathname)
{
    DIR *dir = opendir(pathname);
    struct stat statbuf;
    struct dirent *entry = readdir(dir);
    char *entry_name;
    char *entry_path;

    display_total_blocks(pathname);
    while (entry != NULL){
        entry_name = entry->d_name;
        entry_path = get_relative_path(entry_name, pathname);
        if (entry_name[0] != '.'){
            lstat(entry_path, &statbuf);
            display_l_format(&statbuf, entry_name);
        }
        entry = readdir(dir);
    }
    closedir(dir);
}

int handle_l(char const *pathname)
{
    int is_valid = check_pathname(pathname);
    struct stat statbuf;

    if (is_valid == 84){
        return 84;
    }
    if (is_valid == 1){
        handle_l_dir(pathname);
    }
    if (is_valid == 2){
        lstat(pathname, &statbuf);
        display_l_format(&statbuf, pathname);
    }
}
