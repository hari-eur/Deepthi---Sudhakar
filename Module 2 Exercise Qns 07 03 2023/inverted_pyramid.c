#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("Using for loop\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-i-1;j++){
            if(j<i){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }        
        printf("\n");
    }
    printf("Using while loop\n");
    int i=0;
    while(i<n){
        int j=0;
        while(j<2*n-i-1){
            if(j<i){
                printf("  ");
            }
            else{
                printf("* ");
            }
            j++;
        }
        i++;
        printf("\n");
    }
}
