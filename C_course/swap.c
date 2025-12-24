#include<stdio.h>

int main (){
    int a , b;

    printf("enter the first number (a):");
    scanf("%d",&a);
    printf("enter the second number (b):");
scanf("%d", &b);
printf("\nbefore swapping:\n");
printf("a =%d, b =%d\n", a, b);
a = a + b;
b = a - b;
a = a - b;
printf("\nafter swapping:\n");
printf("a %d, b = %d\n", a , b);
return 0;
}