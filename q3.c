#include <stdio.h>

int main() {
    int number, first_digit, last_digit, sum;

    // Input
    printf("Enter any number: ");
    scanf("%d", &number);

    // Extracting the first digit
    first_digit = number;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    // Extracting the last digit
    last_digit = number % 10;

    // Calculating the sum
    sum = first_digit + last_digit;

    // Output
    printf("The sum of the first and the last digit: %d\n", sum);

    return 0;
}
