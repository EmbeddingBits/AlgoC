#include <stdio.h>

void insertionSort(int arr[], int n) {
      for (int i = 0; i < n; i++) {
           int temp = arr[i];
            int j = i - 1;

            while(j >= 0 && arr[j] > temp) {
                  arr[j + 1] = arr[j];
                  j--;
            }
            arr[j + 1] = temp;
      }
}

int main() {
      int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

      insertionSort(arr, 10);

      for(int i = 0; i < 10; i++)
            printf("%d ", arr[i]);
}

