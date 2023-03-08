#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("Using for loop\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n+i;j++){
            if(j<n-i-1){
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
        while(j<n+i){
            if(j<n-i-1){
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
