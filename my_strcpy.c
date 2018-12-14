/*
** EPITECH PROJECT, 2018
** my_strcpy.c
** File description:
** Copy a string into another one
*/

char *my_strcpy(char *dest, char const *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    return(dest);
}
