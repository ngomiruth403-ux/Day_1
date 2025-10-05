#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Convert Celsius to Fahrenheit
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("In Fahrenheit: %.1f\n\n", fahrenheit);

    // Convert Fahrenheit to Celsius
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;
    printf("In Celsius: %.1f\n", celsius);

    return 0;
}
