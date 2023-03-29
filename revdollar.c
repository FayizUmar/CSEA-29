#include <stdio.h>

int main() {
   int sym[20], temp[20], n;
   
   printf("Enter the size of the array: ");
   scanf("%d", &n);
   
   printf("Enter the array elements: ");
   for (int i = 0; i < n; i++) {
      scanf("%d", &sym[i]);
   }
   
   printf("1D array: ");
   for (int i = 0; i < n; i++) {
      printf("%d ", sym[i]);
   }
   
   printf("\nArray after changing 0 to $: ");
   for (int i = n-1; i >= 0; i--) {
      temp[i] = sym[i];
      if (temp[i] == 0) {
         temp[i] = '$';
      }
      printf("%d ", temp[i]);
   }
   
   return 0;
}
