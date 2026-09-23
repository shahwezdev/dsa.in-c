#include <stdio.h>

int main() {
    int arr[100];
    int visited[100] = {0};
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nElement frequencies:\n");

    for (int i = 0; i < n; i++) {
        if (visited[i])
            continue;

        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d -> %d\n", arr[i], count);
    }

    return 0;
}