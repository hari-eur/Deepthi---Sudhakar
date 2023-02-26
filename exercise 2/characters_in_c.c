//output
// Digits
// 0 1 2 3 4 5 6 7 8 9
// Alphabets
// A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
// a b c d e f g h i j k l m n o p q r s t u v w x y z
// Special Characters
// ! " # $ % & ' ( ) * + , - . / : ; < = > ? @ [ \ ] ^ _ ` { | } ~


#include<stdio.h>
int main(){
    printf("Digits\n");
    for(int i=0;i<=9;i++){
        printf("%d ",i);
    }
    printf("\n");
    printf("Alphabets\n");
    for(int i=65;i<=90;i++){
        printf("%c ",i);
    }
    printf("\n");
    for(int i=97;i<=122;i++){
        printf("%c ",i);
    }
    printf("\n");
    printf("Special Characters\n");
    for(int i=33;i<=47;i++){
        printf("%c ",i);
    }
    for(int i=58;i<=64;i++){
        printf("%c ",i);
    }
    for(int i=91;i<=96;i++){
        printf("%c ",i);
    }
    for(int i=123;i<=126;i++){
        printf("%c ",i);
    }
    return 0;
}