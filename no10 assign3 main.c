/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>

int main()
{
        char str[50];
        int len,i;
        char *s;

        printf("Enter any String :: ");
        scanf("%s",str);

        s=str;

        len=strlen(s);
        printf("\nThe Reverse of the String [ %s ] is :: ");
        for(i=len;i>=0;i--)
    {
       printf("%c",*(s+i));
    }

    printf("\n");

        return 0;
}