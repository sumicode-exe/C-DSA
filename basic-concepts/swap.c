#include <stdio.h>

int main(){
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d", b);

    return 0;
}