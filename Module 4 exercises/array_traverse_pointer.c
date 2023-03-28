// 3. Create a fixed array and use pointers to transverse through elements and print the output.


#include <stdio.h>
int main(){
   int arr[5]={1,2,3,4,5};
   int *ptr=arr; 
   printf("Traversing array using pointers:\n");
   for(int i=0;i<5;i++){
      printf("%d ", *ptr); 
      ptr++; 
   }
   return 0;
}