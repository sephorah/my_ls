/*
** EPITECH PROJECT, 2022
** return_file_type
** File description:
** my_ls
*/

#include "my.h"

char return_file_type(mode_t mode)
{
    char file_type;
    if ((mode & S_IFMT) == S_IFSOCK)
        file_type = 's';
    if ((mode & S_IFMT) == S_IFREG)
        file_type = '-';
    if ((mode & S_IFMT) == S_IFLNK)
        file_type = 'l';
    if ((mode & S_IFMT) == S_IFBLK)
        file_type = 'b';
    if ((mode & S_IFMT) == S_IFDIR)
        file_type = 'd';
    if ((mode & S_IFMT) == S_IFCHR)
        file_type = 'c';
    if ((mode & S_IFMT) == S_IFIFO)
        file_type = 'p';
    return file_type;
}
