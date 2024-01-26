#include <stdio.h>

int main() {

  int arr[] = {24, 13, 36, 1, 17, 10, 11, 29, 6, 22};

  int n = sizeof(arr) / sizeof(arr[0]);

  int sum = 0;
  
  printf("Bilangan genap : ");
  
  for(int i=0; i<n; i++) {
    if(arr[i] % 2 == 0) {
      printf("%d ", arr[i]);
      sum += arr[i];
    }
  }

  printf("\nJumlah bilangan genap jika ditambahkan: %d", sum);

  return 0;
}