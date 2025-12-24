#include <stdio.h>

int main() {
    int n, pain, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    pain = n;  
    
    while (n > 0) {
        digit = n % 10;       
        rev = rev * 10 + digit; 
        n = n / 10;            
    }

    
    if (rev == pain) {
        printf("%d is a palindrome number.\n", pain);
    } else {
        printf("%d is not a palindrome number.\n", pain);
    }

    return 0;
}