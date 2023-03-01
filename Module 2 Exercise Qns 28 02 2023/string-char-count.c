//input eUR-Training@2023
//output Upper Case Letters:3 Lower Case Letters:8 Other Characters:6

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);
    int u=0,l=0,o=0,i=0;
    while(str[i]!='\0'){
        if(str[i]>='A' && str[i]<='Z'){
            u++;
        }
        else if(str[i]>='a' && str[i]<='z'){
            l++;
        }
        else{
            o++;
        }
        i++;
    }
    printf("Upper Case Letters:%d Lower Case Letters:%d Other Characters:%d",u,l,o);
    return 0;
}