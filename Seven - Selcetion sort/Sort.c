#include <stdio.h>

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    // Find the minimum element in the unsorted part
    int min_idx = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_idx]) {
        min_idx = j;
      }
    }

    // Swap the found minimum element with the first element of the unsorted part
    if (min_idx != i) {
      int temp = arr[i];
      arr[i] = arr[min_idx];
      arr[min_idx] = temp;
    }
  }
}

int main() {
  int arr[] = {64, 25, 12, 22, 11};
  int n = sizeof(arr) / sizeof(arr[0]);

  selectionSort(arr, n);

  printf("Sorted array: \n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
