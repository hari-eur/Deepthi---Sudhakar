#include<stdio.h>
struct structure{
    unsigned char hours;   
    unsigned char minutes;  
    unsigned char seconds;  
    unsigned char day;      
    unsigned char month;    
    unsigned short year;
};

int main(){
    struct structure time;
    printf("Enter the time in the format (HH:MM:SS DD/MM/YYYY): ");
    scanf("%d %d %d %d %d %d", &time.hours, &time.minutes, &time.seconds, &time.day, &time.month, &time.year);
    printf("Time entered: %02d:%02d:%02d %02d/%02d/%04d\n", time.hours, time.minutes, time.seconds, time.day, time.month, time.year);
    printf("Sizeof struct Time: %zu bytes\n", sizeof(struct structure));
}