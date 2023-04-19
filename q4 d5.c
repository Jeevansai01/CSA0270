#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char filename[100], ch;
    char search[100];

    printf("Enter file name: ");
    scanf("%s", filename);

    printf("Enter search string: ");
    scanf("%s", search);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("File does not exist.\n");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            printf("\n");
        }
        else
        {
            printf("%c", ch);
        }
    }

    fclose(fp);

    return 0;
}