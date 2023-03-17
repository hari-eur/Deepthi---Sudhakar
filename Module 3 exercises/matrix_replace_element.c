#include<stdio.h>
void main(){
    int n,m;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=0 && arr[i][j]==m){
                arr[i][j]=arr[i-1][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}