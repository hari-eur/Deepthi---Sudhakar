// program to get two integer and one character as input and print cube value and ascii value as output
// input
// 2
// 3
// a
// output
// 8
// 27
// 97

#include<stdio.h>
#include<math.h>
int findcube(int n){
    int ans = pow(n,3);
    return ans;
}
int findascii(char c){
    int ans = (int)c;
    return ans;
}
int main(){
    int a,b;
    char ch;
    scanf("%d %d",&a,&b);
    while((getchar()) != '\n');
    scanf("%c",&ch);
    printf("%d\n",findcube(a));
    printf("%d\n",findcube(b));
    printf("%d\n",findascii(ch));
    return 0;
}