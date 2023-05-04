// File Handling
/*
#include<stdio.h>

int main()
{
    int a = 5;
    return 0;
}
*/

/*
#include<stdio.h>

int getBalance(){
    int balance;
    FILE *fp;
    fp = fopen("accounts.txt", "r");
    fscanf(fp, "%d", &balance);
    fclose(fp);
    return balance;
}

void updateBalance(int balance){
    FILE *fp;
    fp = fopen("accounts.txt", "w");
    fprintf(fp, "%d", balance);
    fclose(fp);
}

int main()
{
    int balance = 1000, amount;

    // FILE *fp;
    // fp = fopen("accounts.txt", "r");
    // // scanf("%d", &balance);
    // fscanf(fp, "%d", &balance);
    // fclose(fp);

    balance = getBalance();
 
    printf("Your current balance = %d\n", balance);

    printf("Enter amount to deposite: ");
    scanf("%d", &amount);
    balance += amount;
    printf("New balance = %d\n", balance);

    // fp = fopen("accounts.txt", "w");
    // fprintf(fp, "%d", balance);
    // fclose(fp);

    updateBalance(balance);

    return 0;
}
*/


#include<stdio.h>
#include<stdlib.h>

int getBalance(){
    int balance;
    FILE *fp;
    fp = fopen("accounts.txt", "r");
    fscanf(fp, "%d", &balance);
    fclose(fp);
    return balance;
}

void updateBalance(int balance){
    FILE *fp;
    // write mode
    fp = fopen("accounts.txt", "w");
    fprintf(fp, "%d", balance);
    fclose(fp);
}

void updateTransactions(int amount){
    FILE *fp;
    // append mode
    fp = fopen("transactions.txt", "a");
    // printf("Cursor is at: %d\n", ftell(fp));
    fseek(fp, 0, SEEK_SET);
    fprintf(fp, "%d\n", amount);
    fclose(fp);
}

int getLastTransaction(){
    int amount;
    FILE *fp;
    fp = fopen("transactions.txt", "r");
    // printf("Cursor is at: %d\n", ftell(fp));
    // fseek(fp, 4, SEEK_SET);
    // printf("Cursor is at: %d\n", ftell(fp));
    fscanf(fp, "%d", &amount);
    // printf("Cursor is at: %d\n", ftell(fp));
    // fscanf(fp, "%d", &amount);
    fclose(fp);
    return amount;
}

int main()
{
    int balance, amount, op;

    balance = getBalance();

    printf("Press:\n");
    printf("1 for deposite\n");
    printf("2 for withdrawl\n");
    printf("3 to check balance\n");
    printf("4 to view the last transaction\n");
    printf("9 to exit\n");
    
    scanf("%d", &op);
    switch(op){
        case 1:
            printf("Enter amount to deposite: ");
            scanf("%d", &amount);
            balance += amount;
            printf("New balance = %d\n", balance);
            updateBalance(balance);
            updateTransactions(amount);
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);
            balance -= amount;
            printf("New balance = %d\n", balance);
            updateBalance(balance);
            updateTransactions(-amount);
            break;

        case 3:
            balance = getBalance();
            printf("Your current balance is: %d\n", balance);
            break;

        case 4:
            amount = getLastTransaction();
            printf("Last transaction = %d", amount);
            break;

        case 9:
            exit(0);

        default:
            printf("This operation is not supported at the moment. Please try again...");

    }
    return 0;
}
