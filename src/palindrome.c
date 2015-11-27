#include <string.h>
#include <stdio.h>
#include <malloc.h>

int is_palindrome(char *str)
{
    char *buffer = malloc(strlen(str));
    unsigned i = 0;
    unsigned j = strlen(str) - 1;
    for (; i < strlen(str); i++, j--)
    {
        buffer[i] = str[j];
    }
    buffer[i] = '\0';
    
    printf("str: %s\n", str);
    printf("buffer: %s\n", buffer);

    if (strcmp(str, buffer) == 0)
    {
        printf("It's a palindrome !\n");
        free(buffer);
        return 1;
    }
    else
    {
        printf("It's not a palindrome..\n");
        free(buffer);
        return 0;
    }
}
