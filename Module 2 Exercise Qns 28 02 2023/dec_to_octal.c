//decimal to octal without using array
//input 1256
//output 2350


#include <stdio.h>
void main(){
     int dec,i,j,octal=0;
     scanf("%d",&dec);
     i=1;
     for(j=dec;j>0;j=j/8){
          octal=octal+(j % 8)*i;
          i=i*10;
          dec=dec/8;
     }
     printf("%d",octal);
}