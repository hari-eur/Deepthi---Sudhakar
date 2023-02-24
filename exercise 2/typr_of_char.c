// print the type of character
//input s
//output alphabet
//input !
//output punctuation

#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("alphabet");
    }
    else if(ch >= '0' && ch <= '9'){
        printf("digit");
    }
    else if(ch == ' '){
        printf("white space");
    }
    else{
        printf("punctuation");
    }
    return 0;
}