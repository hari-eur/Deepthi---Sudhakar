//numbers to words
//input 8456
//output eight thousand four hundred twenty six
//input 65253
//output sixty five thousand two hundred fifty three
//input 568245
//output five lakh sixty eight thousand two hundred fourty five 
//input 1526325478  
//output one hundred fifty two crore sixty three lakh twenty five thousand four hundred seventy eight 
#include<stdio.h>
#include<string.h>
int main(){
    long n;
    scanf("%ld",&n);
    char units[10][10]={"one","two","three","four","five","six","seven","eight","nine"};
    char tens[10][20]={"ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
    char hundreds[10][20]={"one hundred","two hundred","three hundred","four hundred","five hundred","six hundred","seven hundred","eight hundred","nine hundred"};
    char thousands[10][20]={"one thousand","two thousand","three thousand","four thousand","five thousand","six thousand","seven thousand","eight thousand","nine thousand"};
    char tenthousands[10][20]={"ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
    char lakhs[10][20]={"one lakh","two lakh","three lakh","four lakh","five lakh","six lakh","seven lakh","eight lakh","nine lakh"};
    char tenlakhs[10][20]={"ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
    char crores[10][20]={"one crore","two crore","three crore","four crore","five crore","six crore","seven crore","eight crore","nine crore"};
    char tencrores[10][20]={"ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
    char hundredcrores[10][20]={"one hundred","two hundred","three hundred","four hundred","five hundred","six hundred","seven hundred","eight hundred","nine hundred"};
    int len = 0;
    long temp = n;
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
            case 6:
            strcpy(arr[ind],lakhs[temp-1]);
            break;
            case 7:
            strcpy(arr[ind],tenlakhs[temp-1]);
            break;
            case 8:
            strcpy(arr[ind],crores[temp-1]);
            break;
            case 9:
            strcpy(arr[ind],tencrores[temp-1]);
            break;
            case 10:
            strcpy(arr[ind],hundredcrores[temp-1]);
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