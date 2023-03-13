// program to print armstrong numbers within range
// input
// 100
// 500
// output
// 153 370 371 407 


#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool check_armstrong(int n){
    int i,m;
    int num = n,p=n,count=0;
    double sum = 0;   
    while(p>0){
        p=p/10;
        count+=1;
    }
    while (n> 0){
        m=n%10;
        sum = sum+pow(m,count);
        n/=10;
    }
    if (sum==num)
        return 1;
    else
        return 0;
}
int main(){
    int lowerlimit,upperlimit;
    scanf("%d %d",&lowerlimit,&upperlimit);
    for(int i=lowerlimit;i<=upperlimit;i++){
        if(check_armstrong(i)){
            printf("%d ",i);
        }
    }
    return 0;
}