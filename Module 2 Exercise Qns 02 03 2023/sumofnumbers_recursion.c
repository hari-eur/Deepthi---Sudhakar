//sum of natural numbers using recursion
//input 10
//output 55


#include<stdio.h>
int sum(int n) {
  if (n > 0) 
    return n + sum(n - 1);
  else 
    return 0;
}

void main() {
  int n;
  scanf("%d",&n);
  printf("%d",sum(n));
}