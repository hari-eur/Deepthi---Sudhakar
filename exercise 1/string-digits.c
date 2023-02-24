#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if((str[i]>='0')&&(str[i]<='9')){
            continue;
        }
        else{
            for(int j=i;j<n;j++) {
                str[j]=str[j+1];
            }
            n--;
            i--;
        }
    }
    puts(str);
}