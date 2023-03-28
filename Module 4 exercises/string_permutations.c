#include<stdio.h>
#include<string.h>
void generatePermutation(char *str,const int start, int end){ 
    char temp;  
    int i,j;  
    for(i = start; i < end-1; ++i){
        for(j = i+1; j < end; ++j){  
            temp = str[i];  
            str[i] = str[j];  
            str[j] = temp;
            generatePermutation(str , i+1 ,end);
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
    }
    printf("%s\n",str);  
}  
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
    printf("The possible permutations are:\n");
    generatePermutation(str,0,len);
    return 0;
}