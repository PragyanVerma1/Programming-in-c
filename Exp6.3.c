#include <stdio.h>
int main() {
    int n, i, key, freq = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the number whose frequency you want to find: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key)
            freq++;
    }
    printf("Frequency of %d is: %d\n", key, freq);
    return 0;
}
