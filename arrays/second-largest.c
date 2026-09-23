#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100];
    int n;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        printf("Second largest element does not exist.\n");
    else
        printf("Second largest element = %d\n", secondLargest);

    return 0;
}