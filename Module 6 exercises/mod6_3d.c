//d. Search a word 'X' in the entire file and display the lines with it.
#include <stdio.h>
#include <string.h>
int main(){
    char filename[100], line[1000];
    char word[] = "x";
    int line_num = 0;
    FILE *fp = fopen("file1.txt", "r");
    if (fp == NULL){
        printf("File not found");
        return 1;
    }
    while (fgets(line, 1000, fp)){
        line_num++;
        if (strstr(line,word)){
            printf("Line %d: %s", line_num, line);
        }
    }
    fclose(fp);
    return 0;
}