#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("Using for loop\n");
    printf("Half pyramid 1\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }       
        printf("\n");
    }
    printf("Half pyramid 2\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
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
    printf("Half pyramid 1\n");
    int i=0;
    while(i<n){
        int j=0;
        while(j<=i){
            printf("* ");
            j++;
        }
        i++;
        printf("\n");
    }
    printf("Half pyramid 2\n");
    i=0;
    while(i<n){
        int j=0;
        while(j<n){
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
