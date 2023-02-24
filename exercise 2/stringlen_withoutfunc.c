//length of string without inbuilt function
//input program
//output 7

#include<stdio.h>
int main(){
    char str[100];
    gets(str);
    int len = 0;
    while(str[len]!='\0'){
        len++;
    }
    printf("%d",len);
    return 0;
}