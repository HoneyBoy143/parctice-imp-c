//sum of number 1 from n

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
        printf("Calculation: %d\n",sum);
    }
    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
