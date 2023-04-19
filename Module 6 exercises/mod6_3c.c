//c. Display the entire file
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=fopen("file1.txt","r");
    char ch;
    if(fp!=NULL){
        while((ch=getc(fp))!=EOF){
            fputc(ch,stdout);
        }
    }
    else{
        printf("File not found");
    }
    return 0;
}