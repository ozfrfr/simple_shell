# Shell Project Overview

This shell project is divided into multiple tasks, each building upon the previous one to create a progressively more feature-rich shell. Here is an overview of the project tasks:

## Task 1: Simple Shell 0.1

In this initial task, we aim to implement a basic shell. The primary goal is to allow users to execute commands entered in the shell.

## Task 2: Simple Shell 0.2

Building on Task 1, the shell now supports executing commands with arguments. Additionally, it can handle the built-in `exit` command for terminating the shell.

## Task 3: Simple Shell 0.3

Task 3 enhances the shell's capabilities by allowing it to handle commands with options. It also introduces the ability to execute commands in both foreground and background modes.

## Task 4: Simple Shell 0.4

This task adds input and output redirection functionality. Users can now redirect input from files and redirect output to files, enhancing the shell's utility.

## Task 5: Simple Shell 1.0

The final task, Simple Shell 1.0, represents the completion of the shell project. It includes additional advanced features such as piping, signal handling, and support for environment variables.

To compile your shell, you can use the following command:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

```
