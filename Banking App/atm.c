// Banking Program
//Aayush Acharya


#include <stdio.h>

void checkBalance(float balance);
float deposit ();
float withdraw(float balance);

int main () {
    int choice = 0;

    float balance = 0.0f;

    printf("Welcome to the Bank");

    do{
        printf("Select an option:\n");

        printf("\n1. Check Balance\n ");
        printf("\n2. Deposit Money\n");
        printf("\n3. Withdraw Miney\n");
        printf("\n4. Exit\n");

        printf("Select your choice:");
        scanf("%d", &choice);

        switch (choice){
            case 1:
            checkBalance(balance);
            break;

            case 2:
            balance = balance + deposit();
            break;

            case 3:
            balance = balance - withdraw(balance);
            break;

            case 4:
            printf("\n Thank you for using the bank !\n");
            break;

            default:
            printf("\nInvalid Choice ! please select 1 -4\n");

        }

    } while (choice != 4);
    printf("You have been logged out of the bank !");


    return 0;
}

void checkBalance(float balance){
    printf("\nYour current balance is: %.2f\n", balance);

}

float deposit (){

    return 0.0f;

}

float withdraw(float balance){

    return 0.0f;

}
