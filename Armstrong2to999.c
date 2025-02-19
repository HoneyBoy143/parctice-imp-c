#include <stdio.h>

int main() {
    int n, sum, digit, temp, i;

    for(i = 2; i <= 999; i++) {
        n = i;
        sum = 0;
        temp = n;

        while(n != 0) {
            digit = n % 10;
            sum += (digit * digit * digit);
            n /= 10;
        }

        if(temp == sum) {
            printf("%d is an Armstrong number\n", temp);
        }
    }

    return 0;
}
