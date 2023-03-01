//input 5
//output
// 1 
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

#include<stdio.h>
int main(){
    int n,i,j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            if(j==0){
                c=1;
            }
            else{
                c=c*(i-j+1)/j;
            }
            printf("%d ",c);
        }
        printf("\n");
    }
}