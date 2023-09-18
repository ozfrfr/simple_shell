#include "my_shell_functions.h"

/**
 * main - Entry point of the shell program
 *
 * This is the main function of the shell program. It initializes variables,
 * sets up signal handling for Ctrl+C (SIGINT), and enters the shell's main
 * loop for reading and executing commands.
 *
 * Return: Always returns 0 on successful execution.
 */
int main(void)
{
    char *flpthbfD = NULL, *copy = NULL, *buffer = NULL;
    char *PATH = NULL;
    char **av;
    int exitstatus = 0;

    signal(SIGINT, SIG_IGN);

    PATH = _getenvDyl("PATH");
    if (PATH == NULL)
        return (-1);

    while (1)
    {
        av = NULL;
        promptDyl();
        buffer = _readDyl();

        if (*buffer != '\0')
        {
            av = tokenizeDyl(buffer);
            if (av == NULL)
            {
                free(buffer);
                continue;
            }
            flpthbfD = _fullpathbfDyl(av, PATH, copy);
            if (checkbuiltinsDyl(av, buffer, exitstatus) == 1)
                continue;
            exitstatus = _forkprocesDyl(av, buffer, flpthbfD);
        }
        else
            free(buffer);

    }
    return (0);
}
