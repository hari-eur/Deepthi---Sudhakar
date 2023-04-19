#include<stdio.h>
#include<string.h>
struct Student_Detailes {
    char Name[50];
    char mailID[50];
    char Mobile[15];
    float Percentage;
};
struct Department {
    char Dept_Name[20];
    struct Student_Detailes student;
    float TotalAverage;
};
int main() {
    int num_inputs, i, j;
    printf("Enter the number of inputs: ");
    scanf("%d", &num_inputs);
    struct Department dept[num_inputs];
    for(i = 0; i < num_inputs; i++) {
        printf("Enter the details for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", dept[i].student.Name);
        printf("Mail ID: ");
        scanf("%s", dept[i].student.mailID);
        printf("Mobile Number: ");
        scanf("%s", dept[i].student.Mobile);
        printf("Percentage: ");
        scanf("%f", &dept[i].student.Percentage);
        printf("Department Name: ");
        scanf("%s", dept[i].Dept_Name);
    }

    float sum, total_avg;
    int count;
    printf("\nAverage percentage per department:\n");
    for(i = 0; i < num_inputs; i++) {
        sum = 0;
        count = 0;
        for(j = 0; j < num_inputs; j++) {
            if(strcmp(dept[i].Dept_Name, dept[j].Dept_Name) == 0) {
                sum += dept[j].student.Percentage;
                count++;
            }
        }
        total_avg = sum/count;
        dept[i].TotalAverage = total_avg;
        printf("%s - %.2f%%\n", dept[i].Dept_Name, dept[i].TotalAverage);
    }
    return 0;
}
