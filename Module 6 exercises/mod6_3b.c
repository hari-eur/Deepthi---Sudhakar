//b. Display the list 10 lines of a file
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp=fopen("file1.txt","r");
    int c=0;
    char ch;
    if(fp!=NULL){
        while((ch=getc(fp))!=EOF){
            if(ch!='\n'){
                printf("%c",ch);
            }
            else{
                printf("\n");
                ++c;
            }
            if(c==10){
                break;
            }
        }
    }
    else{
        printf("File not found");
    }
    fclose(fp);
    return 0;
}