#include <stdio.h>

int main (int argc, char *argv[]) {
    int a, b;
    
    printf("Enter the 2 integers: ");
    scanf("%i %i", &a, &b);

    printf("The result of +: %d\n", a + b);
    printf("The result of -: %d\n", a - b);
    printf("The result of *: %d\n", a * b);
    printf("The result of /: %d\n", a / b);
    printf("The result of %%: %d\n", a % b);

    return 0;
}