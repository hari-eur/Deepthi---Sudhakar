#include<stdio.h>
int main(){
    char a,b;
    scanf("%c %c",&a,&b);
    if(a^b){
        printf("not equal");
    }
    else{
        printf("equal");
    }
}