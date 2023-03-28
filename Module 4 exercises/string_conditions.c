/*Write a program to handle strings
    i) Get string as input and store it in array 
    ii) Check string if it is 8 character length, contains atleast one lowercase and uppercase,
    one number and one special character with and without string functions/char lib functions.*/


#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int len=0,low=0,upp=0,num=0,spe=0;
    for(int i=0;str[i]!='\0';i++){
        len++;
        if(str[i]>='0' && str[i]<='9'){
            num++;
        }
        else if(str[i]>='a' && str[i]<='z'){
            low++;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            upp++;
        }
        else{
            spe++;
        }
    }
    if(len==8 && num!=0 && low!=0 && upp!=0 && spe!=0){
        printf("conditions satisfied");
    }
    else{
        printf("conditions not satisfied");
    }
    return 0;
}