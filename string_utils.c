#include "my_shell_functions.h"

/**
 * _strdupDyl - Duplicates a string
 *
 * This function creates a duplicate of the input string `Dylnstr` and returns
 * a pointer to the duplicated string.
 *
 * @Dylnstr: The input string to be duplicated.
 *
 * Return: A pointer to the duplicated string or NULL on failure.
 */
char *_strdupDyl(char *Dylnstr)
{
    int i;
    char *dest_str;

    if (Dylnstr == NULL)
        return (NULL);
    for (i = 0; Dylnstr[i] != '\0'; i++)
        ;
    dest_str = malloc(sizeof(char) * (i + 1));
    if (dest_str == NULL)
        return (NULL);
    for (i = 0; Dylnstr[i] != '\0'; i++)
    {
        dest_str[i] = Dylnstr[i];
    }
    dest_str[i] = '\0';
    return (dest_str);
}

/**
 * _splitstringDyl - Splits a string into words
 *
 * This function counts the number of words in the input string `Dylnstr` based
 * on spaces as separators and returns the count.
 *
 * @Dylnstr: The input string to be split.
 *
 * Return: The number of words in the string.
 */
int _splitstringDyl(char *Dylnstr)
{
    int i;
    int searchflag = 1;
    int wordcount = 0;

    for (i = 0; Dylnstr[i]; i++)
    {
        if (Dylnstr[i] != ' ' && searchflag == 1)
        {
            wordcount += 1;
            searchflag = 0;
        }
        if (Dylnstr[i + 1] == ' ')
            searchflag = 1;
    }
    return (wordcount);
}

/**
 * _strcmpDyl - Compares two strings
 *
 * This function compares two strings `strD1` and `strD2` and returns an
 * integer value indicating their relationship.
 *
 * @strD1: The first string to be compared.
 * @strD2: The second string to be compared.
 *
 * Return: 0 if the strings are equal, a positive value if strD1 is greater,
 * or a negative value if strD2 is greater.
 */
int _strcmpDyl(const char *strD1, const char *strD2)
{
    while ((*strD1 != '\0' && *strD2 != '\0') && *strD1 == *strD2)
    {
        strD1++;
        strD2++;
    }
    if (*strD1 == *strD2)
        return (0);
    else
        return (*strD1 - *strD2);
}

/**
 * _strcatDyl - Concatenates two strings
 *
 * This function appends the content of string `src` to the end of string `dest`
 * and returns `dest`.
 *
 * @dest: The destination string to which `src` is appended.
 * @src: The source string that is appended to `dest`.
 *
 * Return: A pointer to the destination string `dest`.
 */
char *_strcatDyl(char *dest, char *src)
{
    int i;
    int j;

    for (i = 0; dest[i] != '\0'; i++)
        ;
    for (j = 0; src[j] != '\0'; j++, i++)
        dest[i] = src[j];
    dest[i] = '\0';
    return (dest);
}

/**
 * _strlenDyl - Calculates the length of a string
 *
 * This function calculates and returns the length of the input string `s`.
 *
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlenDyl(char *s)
{
    int i;

    for (i = 0; s[i]; i++)
        ;
    return (i);
}
