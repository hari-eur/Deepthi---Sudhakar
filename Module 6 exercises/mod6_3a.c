//a. Count the no. of lines, words in the file
#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp=fopen("file1.txt","r");
    char ch;
    int l=0,c=0,w=0;
    if(fp!=NULL){
        while((ch=getc(fp))!=EOF){
            if(ch!=' ' && ch!='\n'){
                ++c;
            }           
            if(ch==' ' || ch=='\n'){
                ++w;
            }
            if(ch=='\n'){
                ++l;
            }
        }
        if(c>0){
            ++l;
            ++w;
        }
    }
    else{
        printf("File not found");
    }
    printf(" No of lines is %d\nNo of words is %d\nNo of characters is %d\n",l,w,c);
    return 0;
}