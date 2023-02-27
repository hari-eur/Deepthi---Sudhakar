//C program to convert lower case string to upper case.
//input 44:d4:54:c2:18:cf
//output 44:D4:54:C2:18:CF


#include<stdio.h>
int main(){
    char str[100];
    gets(str);
    for(int i = 0;str[i] != '\0';i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
    puts(str);
    return 0;
}