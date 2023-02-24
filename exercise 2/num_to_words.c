//numbers to words
//input 8456
//output eight thousand four hundred twenty six
//input 65253
//output sixty five thousand two hundred fifty three

#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char units[10][10]={"one","two","three","four","five","six","seven","eight","nine"};
    char tens[10][20]={"ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
    char hundreds[10][20]={"one hundred","two hundred","three hundred","four hundred","five hundred","six hundred","seven hundred","eight hundred","nine hundred"};
    char thousands[10][20]={"one thousand","two thousand","three thousand","four thousand","five thousand","six thousand","seven thousand","eight thousand","nine thousand"};
    char tenthousands[10][20]={"ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
    int len = 0;
    int temp = n;
    while(temp > 0){
        temp /= 10;
        len++;
    }
    char arr[len][20];
    int i = 1;
    int ind = len-1;
    while(n > 0){
        temp = n % 10;
        switch (i){
            case 1:
            strcpy(arr[ind],units[temp-1]);
            break;
            case 2:
            strcpy(arr[ind],tens[temp-1]);
            break;
            case 3:
            strcpy(arr[ind],hundreds[temp-1]);
            break;
            case 4:
            strcpy(arr[ind],thousands[temp-1]);
            break;
            case 5:
            strcpy(arr[ind],tenthousands[temp-1]);
            break;
        }
        i++;
        ind--;
        n /= 10;
    }
    for(int i = 0;i < len;i++){
        printf("%s ",arr[i]);
    }
    return 0;
}