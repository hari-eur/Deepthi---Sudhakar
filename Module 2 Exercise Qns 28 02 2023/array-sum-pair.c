//input array 6 8 4 -5 7 9
//input sum 15
//output (6,9) (8,7)

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum;
    scanf("%d",&sum);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}