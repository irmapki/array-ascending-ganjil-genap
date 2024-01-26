#include <stdio.h>

int main() {
  int arr[] = {24, 13, 36, 1, 17, 10, 5, 19, 7, 12};
  int n = sizeof(arr) / sizeof(arr[0]);
  
  printf("Array ganjil: \n");

  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0) {
      printf("%d ", arr[i]);
    }
  }

  return 0;
}
