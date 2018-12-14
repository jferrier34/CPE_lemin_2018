/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>

/*
** STRUCTURE_PROJECT
 */

typedef struct rooms
{
    int  ant;
    int who_am_i;
    int time_check;
    char *name;
    struct rooms **next;
} room;

/*
** PROJECT_FUNCTIONS
*/

int len_malloc(char **);
char *my_strcpy(char *, char const *);
int my_strlen(char const *);
char *str_comp(char *);
int is_param (char *);
int how_many_rooms(char **);
char **rooms_tab(char **);
room **create_room(char *, room **, int);
void add_room(room **, char *, char **, int *);
room **create_anthill(char **, int, char ***, int *);

/*
** LIB_FUNCTIONS
*/

void my_putchar(char c);
int my_put_nbr(int nb);
int my_strlen(char const *str);
void my_pustr(char *str);
int my_getnbr(char const *str);
char *my_strconcat(char *, char, char *);
int main(int ac, char **av);

#endif
