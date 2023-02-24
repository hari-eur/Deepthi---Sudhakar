#include<stdio.h>
int main(){
    int n,ans=0;
    scanf("%d",&n);
    while(n>0){
        n-=4;
        ans++;
    }
    printf("%d",ans);
}