// Banking Program


#include <stdio.h>

void checkBalance(float balance);
float deposit ();
float withdraw(float balance);

int main () {
    int choice = 0;

    float balance = 0.0f;

    printf("====Welcome to the Bank====\n");

    do{
        printf("\nSelect an option:\n");

        printf("\n1. Check Balance\n ");
        printf("\n2. Deposit Money\n");
        printf("\n3. Withdraw Money\n");
        printf("\n4. Exit\n");

        printf("\nSelect your choice:");
        
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n'); 
            choice = 0;
            continue;
            }



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
    float amount = 0.0f;

    printf("\nEnter amount to deposit: $");
    scanf("%f", &amount);

    if (amount < 0){
        printf ("Invalid amount\n");
        return 0.0f;
    }
    else {
        printf("Successfully deposited $%.2f", amount);
    }

    return amount;

}

float withdraw(float balance){

    float amount = 0.0f;

    printf("\nEnter amount to withdraw: $");

    scanf("%f", &amount);

    if(amount < 0){
        printf("Invalid amount !\n");
        return 0.0f;
    
    }

    else if (amount > balance){
        printf("Insufficient funds ! Your current balance is %.2f\n", balance);
        return 0.0f;
    }
    else {
        printf("Successfully withdrawn $%.2f", amount);
            return amount;
    }
return balance;
}
