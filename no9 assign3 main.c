
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

    ptr1 = arr1;
    ptr2 = arr2;

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
