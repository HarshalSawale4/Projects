#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ACCOUNTS 100

struct Account {
    int account_number;
    char name[50];
    float balance;
};



struct Account accounts[MAX_ACCOUNTS];
int num_accounts = 0;

void createAccount() {
    struct Account new_account;
    printf("Enter account number: ");
    scanf("%d", &new_account.account_number);
    printf("Enter name: ");
    scanf("%s", new_account.name);
    printf("Enter initial balance: ");
    scanf("%f", &new_account.balance);
    accounts[num_accounts++] = new_account;
    printf("Account created successfully!\n");
}

void deposit() {
    int acc_number;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &acc_number);
    for (int i = 0; i < num_accounts; i++) {
        if (accounts[i].account_number == acc_number) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            accounts[i].balance += amount;
            printf("Deposit successful. Updated balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found.\n");
}

void withdraw() {
    int acc_number;
    float amount;
    printf("Enter account number: ");
    scanf("%d", &acc_number);
    for (int i = 0; i < num_accounts; i++) {
        if (accounts[i].account_number == acc_number) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > accounts[i].balance) {
                printf("Insufficient balance.\n");
            } else {
                accounts[i].balance -= amount;
                printf("Withdrawal successful. Updated balance: %.2f\n", accounts[i].balance);
            }
            return;
        }
    }
    printf("Account not found.\n");
}

void checkBalance() {
    int acc_number;
    printf("Enter account number: ");
    scanf("%d", &acc_number);
    for (int i = 0; i < num_accounts; i++) {
        if (accounts[i].account_number == acc_number) {
            printf("Account holder: %s\n", accounts[i].name);
            printf("Current balance: %.2f\n", accounts[i].balance);
            return;
        }
    }
    printf("Account not found.\n");
}

int main() {
    int choice;
    do {
        printf("\nBank Management System\n");
        printf("1. Create Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: createAccount(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: checkBalance(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
    } while (choice != 5);
    return 0;
}
