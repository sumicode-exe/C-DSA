#include <stdio.h>

int main(){
    int n;

    printf("Enter a number, n: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n;)
    {
        sum += i;
        i += 1;
    }

    printf("Sum is: %d", sum);

    return 0;
}