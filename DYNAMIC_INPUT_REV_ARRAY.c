#include<stdio.h>

int main() {
    int n, i, j = 0, k;
    
    // Taking the number of elements from the user
    printf("Enter the number of elements you want to store in the array: ");
    scanf("%d", &n);

    // Declaring arrays of size 'n'
    int arr_num[n];     // Original array
    int arr_revnum[n];  // Reversed array

    // Input: Taking array elements from the user
    for (i = 0; i < n; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr_num[i]);
    }

    // Reversing the array
    for (k = n - 1; k >= 0; k--) {
        arr_revnum[k] = arr_num[j];
        j++;
    }

    // Output: Printing the reversed array
    printf("The reversed array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr_revnum[i]);
    }
    
    return 0;
}
