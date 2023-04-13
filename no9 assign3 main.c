/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
#define MAX 50

void print_array(int arr[], int n);

void main()
{
	int arr1[MAX], arr2[MAX];
    int n, i;
    int *ptr1, *ptr2;

    printf("Enter the size of the array\t:");
    scanf("%d",&n);

    printf("\nEnter elements in the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }

    ptr1 = arr1;      //pointer ptr1 points to arr1[0]
    ptr2 = arr2;      //pointer ptr2 points to arr2[0]

    printf("\nSource array before copying: ");
    print_array(arr1, n);

    printf("\nDestination array before copying: ");
    print_array(arr2, n);

    for(i=0;i<n;i++)
    {
        *ptr2 = *ptr1;
        *ptr1++;
        *ptr2++;
    }

    printf("\n\nSource array after copying: ");
    print_array(arr1, n);

    printf("\nDestination array after copying: ");
    print_array(arr2, n);

    getch();
}

void print_array(int *arr, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
