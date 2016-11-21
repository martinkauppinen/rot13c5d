#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * rot13c5d(char * input)
{
    char * output = input;
    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] >= 'A' && input[i] <= 'Z')
            output[i] = (((input[i] - 'A') + 13) % 26) + 'A';
        else if (input[i] >= 'a' && input[i] <= 'z')
            output[i] = (((input[i] - 'a') + 13) % 26) + 'a';
        else if (input[i] >= '0' && input[i] <= '9')
            output[i] = (((input[i] - '0') + 5) % 10) + '0';
    }
    return output;
}

int main(int argc, char ** argv)
{
    if (argc < 2)
    {
        fprintf(stderr, "USAGE: %s str\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    for (int i = 1; i < argc; i++)
        printf("%s ", rot13c5d(argv[i]));
    printf("\n");
    return 0;
}
