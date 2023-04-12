#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    printf("Enter Array Elements: ");
    int arr[size];
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("Entered Array is: ");
    for(int i=0;i<size;i++)
    printf("%d ",arr[i]);
    int start=0,end=size-1;
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("\nReversed array is: ");
    for(int i=0;i<size;i++)
    printf("%d ",arr[i]);
    return 0;
}