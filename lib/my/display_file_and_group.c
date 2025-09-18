/*
** EPITECH PROJECT, 2022
** display_file_and_group.c
** File description:
** display_file_and_group.c
*/

#include "my.h"

void display_file_and_group(struct stat *sb)
{
    struct passwd *password = getpwuid(sb->st_uid);
    struct group *grp = getgrgid(sb->st_gid);

    my_printf("%s %s ", password->pw_name, grp->gr_name);
}
