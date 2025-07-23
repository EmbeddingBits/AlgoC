#include <stdio.h>

int linearSearch(int arr[], int target, int n) {
      for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                  return i;
            }      
      }
      return -1;
}

int main() {

      int arr[] = {12, 23, 34, 45, 56, 67, 78, 90};
      int target = 56;
      int n = sizeof(arr) / sizeof(arr[0]);

      int index = linearSearch(arr, target, n);

      if (index != -1) {
            printf("The element %d is at %d", target, index);
      }
      else {
            printf("The element is not found");
      }
}

