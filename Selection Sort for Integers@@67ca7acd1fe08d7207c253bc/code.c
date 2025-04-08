#include<stdio.h>
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for(i = 0; i < n -1; i++){
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp  =arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, n);
    for(int i  = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}