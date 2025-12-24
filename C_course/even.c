#include <stdio.h>

int main() {
    int i, count = 0;

    printf("Counting odd numbers between 1 and 20...\n");

    // Loop from 1 to 20
    for (i = 1; i <= 20; i++) {
        // Check if the number is odd
        if (i % 2 != 0) {
            count++;
            printf("\n%d",i);
        
        }
    }

    printf("Total odd numbers between 1 and 20 is: %d\n", count);

    return 0;
}
