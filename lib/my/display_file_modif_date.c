/*
** EPITECH PROJECT, 2022
** display_file_modif_date.c
** File description:
** my_ls
*/

#include "my.h"

char *retrieve_date(char const *str, int start, int end)
{
    int word_len = (end - start) + 1;
    int i = 0;
    char *dest = malloc(word_len * sizeof(char));
    while ((start + i) < end){
        dest[i] = str[start + i];
        i += 1;
    }
    dest[i] = '\0';
    return dest;
}

void display_file_modif_date(struct stat *sb)
{
    struct timespec mtim = sb->st_mtim;
    const time_t *mtime = &mtim.tv_sec;
    char *time = ctime(mtime);
    char *res = retrieve_date(time, 4, 16);
    my_printf("%s ", res);
}
