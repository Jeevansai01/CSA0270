/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <string.h> 
 
/* Function to swap values at two pointers */
void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
/*  End of swap()  */
 
/*  Function to print permutations of string  */
void permute(char *a, int i, int n)
{
    int j;
    if (i == n)
        printf("%s\n", a);
    else {
        for (j = i; j <= n; j++)
        {
            swap((a + i), (a + j));
            permute(a, i + 1, n);
            swap((a + i), (a + j)); //backtrack
        }
    }
}
 
/*  The main() begins  */
int main()
{
    char a[20];
    int n;
    printf("Enter a string: ");
    scanf("%s", a);
    n = strlen(a);
    printf("Permutaions:\n"); 
    permute(a, 0, n - 1);
    getchar();
    return 0;
}