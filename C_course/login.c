#include <stdio.h>

int main() {
    char u1, u2, u3, u4, u5;   
    char p1, p2, p3, p4, p5;              
    int choice;
    float balance = 0.0, amount;

    printf("\n------------------------------------------");
    printf("\n       Welcome to Secure Banking System   ");
    printf("\n------------------------------------------");

    // Taking username
    printf("\n\nEnter Username (Mohan): ");
    scanf(" %c%c%c%c%c", &u1, &u2, &u3, &u4, &u5);

    // Taking password
    printf("Enter Password (12345): ");
    scanf(" %c%c%c%c%c", &p1, &p2, &p3, &p4, &p5);

    // Check username and password (no loops or arrays)
    if (u1=='M' && u2=='o' && u3=='h' && u4=='a' &&  u5=='n' &&
        p1=='1' && p2=='2' && p3=='3' && p4=='4' && p5=='5') {

        printf("\n Login Successful! Welcome, Mohan!\n");

        // Display menu
        printf("\n------------------------------------------");
        printf("\nSelect an operation:\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform selected operation using switch-case
        switch (choice) {
            case 1:
                printf("Enter amount to Deposit deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance = balance + amount;
                    printf(" Successfully deposited ₹%.2f\n", amount);
                    printf(" New Balance: ₹%.2f\n", balance);
                } else {
                    printf(" Invalid deposit amount!\n");
                }
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf(" Invalid withdrawal amount!\n");
                } else if (amount > balance) {
                    printf("Insufficient balance! Available: ₹%.2f\n", balance);
                } else {
                    balance = balance - amount;
                    printf("Successfully withdrawn ₹%.2f\n", amount);
                    printf(" New Balance: ₹%.2f\n", balance);
                }
                break;

            case 3:
                printf(" Current Balance: ₹%.2f\n", balance);
                break;

            case 4:
                printf("\nThank you for using Secure Banking System. Goodbye!\n");
                break;

            default:
                printf(" Invalid choice! Please select 1–4.\n");
        }
    } 
    else {
        printf("\n Login Failed! Invalid username or password.\n");
    }

    return 0;
}