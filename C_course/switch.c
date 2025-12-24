#include <stdio.h>

int main() {
    int choice;

    printf("Enter a number between 1 to 3: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You selected ONE");
            break;

        case 2:
            printf("You selected TWO");
            break;

        case 3:
            printf("You selected THREE");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}