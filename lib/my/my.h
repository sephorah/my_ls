/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my_ls
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdlib.h>
    #include <stdarg.h>
    #include <sys/stat.h>
    #include <sys/sysmacros.h>
    #include <sys/types.h>
    #include <dirent.h>
    #include <pwd.h>
    #include <grp.h>
    #include <time.h>
typedef struct flag_character{
    int plus_flag;
    int space_flag;
    int hyphen_flag;
    int zero_flag;
    int hashtag_flag;
} flag_char_t;
typedef void (*handle_conversion)(va_list, flag_char_t*);
typedef struct handle_function{
    char flag_conv;
    flag_char_t flags_char;
    handle_conversion fptr;
} handle_funct;
    void my_putchar(char c);
    int my_put_nbr(int nb);
    int my_putstr(char const *str);
    int my_strlen(char const *str);
    long int my_pow_10(int power);
    int nb_len(int nb);
void handle_int(va_list list, flag_char_t *element);
void handle_str(va_list list, flag_char_t *element);
void handle_char(va_list list, flag_char_t *element);
int my_printf(const char *restrict format, ...);
char return_file_type(mode_t mode);
void display_file_type(mode_t mode);
void display_user_permissions(mode_t mode);
void display_group_permissions(mode_t mode);
void display_other_permissions(mode_t mode);
void display_file_and_group(struct stat *sb);
void display_file_type(mode_t mode);
void display_file_modif_date(struct stat *sb);
void display_total_blocks(char const *pathname);
int is_alpha(char c);
int handle_l(char const *pathname);
int handle_a(char const *pathname);
int my_basic_ls(char const *pathname);
typedef int (*handle_option)(char const *pathname);
typedef struct s_handle_option{
    char option;
    handle_option fptr;
} t_handle_option;
char *my_strcat(char *dest, char const *src);
char *get_relative_path(char *filename, char const *dir);
int check_pathname(char const *pathname);
int handle_basic_ls(char const *pathname);
int handle_d(char const *pathname);
#endif
