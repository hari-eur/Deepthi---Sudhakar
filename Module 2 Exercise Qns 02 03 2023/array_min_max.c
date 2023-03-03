//find min and max of array using function
//input array 25 11 35 65 20
//output
// Minimum value is: 11
// Maximum value is: 65


#include<stdio.h>
int find_min(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
}
int find_max(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=find_min(arr,n);
    int max=find_max(arr,n);
    printf("Minimum value is: %d\nMaximum value is: %d",min,max);
}