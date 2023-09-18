#include "my_shell_functions.h"

/**
 * tokenizeDyl - Tokenizes a string into an array of tokens
 *
 * This function tokenizes the input string `buffer` into an array of tokens,
 * where each token is separated by spaces or newline characters. It returns a
 * pointer to an array of strings containing the tokens.
 *
 * @buffer: The input string to be tokenized.
 *
 * Return: A pointer to an array of strings (tokens) or NULL on failure.
 */
char **tokenizeDyl(char *buffer)
{
    char *token;
    int i = 0, wordcount = 0;
    char *delimiter = " \n";
    char **av;

    wordcount = _splitstringDyl(buffer);
    if (!wordcount)
        return (NULL);
    av = malloc((wordcount + 1) * sizeof(char *));
    if (av == NULL)
        exit(1);
    token = strtok(buffer, delimiter);
    while (token != NULL)
    {
        av[i] = _strdupDyl(token);
        token = strtok(NULL, delimiter);
        i++;
    }
    av[i] = NULL;
    return (av);
}

/**
 * _splitPATHdYl - Splits a PATH string into segments
 *
 * This function counts the number of segments in the input PATH string `Dylnstr`
 * based on colons (':') as separators and returns the count.
 *
 * @Dylnstr: The input PATH string to be split.
 *
 * Return: The number of segments in the PATH string.
 */
int _splitPATHdYl(char *Dylnstr)
{
    int i;
    int searchflag = 1;
    int wordcount = 0;

    for (i = 0; Dylnstr[i]; i++)
    {
        if (Dylnstr[i] != ':' && searchflag == 1)
        {
            wordcount += 1;
            searchflag = 0;
        }
        if (Dylnstr[i + 1] == ':')
        {
            searchflag = 1;
        }
    }
    return (wordcount);
}

/**
 * _PATHstrcmpDyl - Compares the first characters of two strings
 *
 * This function compares the first characters of two strings `strD1` and `strD2`
 * until it encounters an '=' character in `strD2`. It returns 0 if they match,
 * indicating success.
 *
 * @strD1: The first string for comparison.
 * @strD2: The second string for comparison.
 *
 * Return: 0 on success, indicating a match in the prefix of the strings.
 */
int _PATHstrcmpDyl(const char *strD1, const char *strD2)
{
    int i;

    for (i = 0; strD2[i] != '='; i++)
    {
        if (strD1[i] != strD2[i])
            return (-1);
    }
    return (0);
}

/**
 * _concatDyl - Concatenates two strings with a slash in between
 *
 * This function concatenates the two input strings `tok` and `av[0]` with a
 * slash '/' in between and stores the result in `tmp`. It ensures the
 * concatenated string is properly terminated.
 *
 * @tmp: The destination buffer for the concatenated string.
 * @av: The array of strings.
 * @tok: The token string to be concatenated with `av[0]`.
 *
 * Return: A pointer to the concatenated string `tmp`.
 */
char *_concatDyl(char *tmp, char **av, char *tok)
{
    int len = 0;

    _memsetDyl(tmp, 0, 256);
    len = _strlenDyl(tok) + _strlenDyl(av[0]) + 2;
    _strcatDyl(tmp, tok);
    _strcatDyl(tmp, "/");
    _strcatDyl(tmp, av[0]);
    tmp[len - 1] = '\0';
    return (tmp);
}
