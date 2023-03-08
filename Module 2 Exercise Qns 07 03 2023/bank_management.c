#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int choice;
    char bank[50];
    char account_type[50];
    printf("--------------------------------------------------------------\n");
    printf("Bank Management System\n");
    printf("--------------------------------------------------------------\n");
    printf("Select your bank\nPress 1 to select SBI\nPress 2 to select ICICI\nPress 3 to select HDFC\nPress 4 to select Axis bank\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            strcpy(bank,"SBI");
            break;
        case 2:
            strcpy(bank,"ICICI");
            break;
        case 3:
            strcpy(bank,"HDFC");
            break;
        case 4:
            strcpy(bank,"Axis bank");
            break;
        default:
            printf("Select correct number\n");
    }
    printf("\nYou have selected %s\n",bank);
    printf("\nSelect account type\n1. Savings account\n2. Current account\n3. Demat account\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            strcpy(account_type,"Savings account");
            printf("\n%s Savings Account Details:\n",bank);
            printf("Interest rate: 5.5%%\n");
            printf("Minimum balance: Rs 1500\n");
            break;
        case 2:
            strcpy(account_type,"Current account");
            printf("\n%s Current Account Details:\n",bank);
            printf("Interest rate: 3.5%%\n");
            printf("Overdraft limit: Rs 35,000\n");
            break;
        case 3:
            strcpy(account_type,"Demat account");
            printf("\n%s Demat Account Details:\n",bank);
            printf("Annual maintenance charges: Rs 700\n");
            printf("Transaction fees: Rs 150 per trade\n");
            break;
        default:
            printf("Invalid choice!\n");
            exit(0);
    }
    printf("\nPress 1 to know the benefits of the chosen account\nPress 0 to exit\n");
    scanf("%d",&choice);
    
    switch(choice){
        case 0:
            exit(0);
        case 1:
            printf("\nBenefits of %s account in %s:\n",account_type,bank);
            if(strcmp(account_type,"Savings account")==0){
                printf("High interest rate of 5.5%%\n");
                printf("Easy access to funds\n");
            }
            else if(strcmp(account_type,"Current account")==0){
                printf("No minimum balance requirement\n");
                printf("Unlimited transactions\n");
            }
            else if (strcmp(account_type,"Demat account")==0){
                printf("Easy buying and selling of stocks\n");
                printf("Online portfolio tracking\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
            exit(0);
    }

}