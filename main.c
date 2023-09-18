#include "my_shell_functions.h"
/**
 * _getenvDyl - Find and return the value of an environment variable.
 * @name: The name of the environment variable to search for.
 *
 * Return: If found, the function returns a ptr to the value of the environment variable.
 *         If not found, it returns NULL.
 */
char *_getenvDyl(const char *name)
{
    int i, result;

    for (i = 0; environ[i]; i++)
    {
        result = _PATHstrcmpDyl(name, environ[i]);
        if (result == 0)
        {
            return (environ[i]);
        }
    }
    return (NULL);
}
/**
 * _Dylenv - Prints the environment variables.
 *
 * Return: Always returns 0 on success.
 */
int _Dylenv(void)
{
    int i;

    for (i = 0; environ[i]; i++)
        _putsDyl(environ[i]);
    return (0);
}
/**
 * _putsDyl - Prints a string followed by a newline.
 * @Dylnstr: The string to be printed.
 */
void _putsDyl(char *Dylnstr)
{
    int c;

    for (c = 0; Dylnstr[c] != '\0'; c++)
        _Dylnaptch(Dylnstr[c]);
    _Dylnaptch('\n');
}
/**
 * _Dylnaptch - Writes a character to standard output.
 * @c: The character to be written.
 *
 * Return: The return value of the write syscall.
 */
int _Dylnaptch(char c)
{
    return (write(1, &c, 1));
}
/**
 * _memsetDyl - Sets a block of memory to a specified value.
 * @s: The pointer to the memory block.
 * @b: The value to set (byte).
 * @n: The number of bytes to set.
 *
 * Return: The pointer to the memory block.
 */
char *_memsetDyl(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }
    return (s);
}
