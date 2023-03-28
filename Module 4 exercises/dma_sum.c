//Write a C program that dynamically allocates an array of integers using either malloc or calloc,
//populates it with values entered by the user, and then calculates and prints the sum of all the values in the array. 
//The program should then use the free function to deallocate the memory used by the array


#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,sum=0,i;
    int* arr;
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for (i=0;i<n;i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("Sum of all elements in the array is %d\n", sum);
    free(arr);
    return 0;
}
