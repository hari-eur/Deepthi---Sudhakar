
#include <stdio.h>
# define print(...) printf(__VA_ARGS__)
int main(){
    char data[20],data_1[20],data_2[20];
    gets(data);
    gets(data_1);
    gets(data_2);
    print("welcome to %s \n",data);
    print("hello to %s ,welcome to %s\n",data_1,data_2);
    return 0;
}
