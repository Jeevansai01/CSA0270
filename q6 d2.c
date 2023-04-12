#include <stdio.h>

#define SIZE 100

int main() {
    int arr[SIZE], even[SIZE], odd[SIZE];
    int n, i, even_index = 0, odd_index = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[even_index] = arr[i];
            even_index++;
        } else {
            odd[odd_index] = arr[i];
            odd_index++;
        }
    }

    printf("Even elements of the array:\n");
    for (i = 0; i < even_index; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd elements of the array:\n");
    for (i = 0; i < odd_index; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}