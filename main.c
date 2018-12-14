/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

#include "./include/my.h"

int len_malloc(char **file)
{
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    int i = 0;

    fp = fopen(file[1], "r");
    if (fp == NULL)
        return (84);

    while ((read = getline(&line, &len, fp)) != -1)
        i++;
    if (line)
        free(line);
    return (i);
}

int main(int ac, char **av)
{
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    char **tab = NULL;
    int j = 0;

    fp = fopen(av[1], "r");
    if (fp == NULL)
        return (84);
    tab = malloc(sizeof(char*) * len_malloc(av) + 1);
    while ((read = getline(&line, &len, fp)) != -1) {
        tab[j] = malloc(sizeof(char) * read);
        tab[j] = my_strcpy(tab[j], line);
	j++;
    }
    j = 0;
    while (tab[j] != NULL) {
        printf("tab : %s", tab[j]);
        j++;
    }
    printf("\n");
    if (line)
        free(line);
    return (0);
}
