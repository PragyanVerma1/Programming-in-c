#include <stdio.h>
int main() {
    int n, i, positive=0, negative=0, odd=0, even=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > 0)
            positive++;
        if(arr[i] < 0)
            negative++;
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Count of positive numbers: %d\n", positive);
    printf("Count of negative numbers: %d\n", negative);
    printf("Count of even numbers: %d\n", even);
    printf("Count of odd numbers: %d\n", odd);
    return 0;
}
