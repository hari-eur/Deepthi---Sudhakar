// program to find roots of a quadratic equation ax^2+bx+c
// input the values of a,b and c
// 1
// -7
// 10
// output
// 5.000000
// 2.000000

#include<stdio.h>
#include<math.h>
float findroot1(int a,int b,int c){
    float ans=(-b + pow((b*b-4*a*c),1.0/2.0))/(2*a);
    return ans;
}
float findroot2(int a,int b,int c){
    float ans=(-b - pow((b*b-4*a*c),1.0/2.0))/(2*a);
    return ans;
}
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float root1 = findroot1(a,b,c);
    float root2 = findroot2(a,b,c);
    printf("%f\n",root1);
    printf("%f",root2);
    return 0;
}