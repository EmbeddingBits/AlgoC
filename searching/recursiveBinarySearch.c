#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
      if (low > high) {
            return -1;
      }

      int mid = (low + high) / 2;

      if (arr[mid] == target) {
            return mid;
      }
      else if (arr[mid] < target) {
            return binarySearch(arr, mid + 1, high, target);
      }
      else {
            return binarySearch(arr, low, mid - 1, target);
      }
}

void selectionSort(int arr[], int n) {
      for (int i = 0; i < n - 1; i++) {
            int min = i;
            for (int j = i + 1; j < n; j++) {
                  if (arr[j] < arr[min]) {
                        min = j;
                  }
            }
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
      }
}

int main() {
      int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
      int target = 10;
      int n = 10;

      selectionSort(arr, n);

      int result = binarySearch(arr, 0, n - 1, target);

      if (result == -1) {
            printf("The element is not found in the array");
      }
      else {
            printf("The element %d is at index %d", target, result);
      }
}
