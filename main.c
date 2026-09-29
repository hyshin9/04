#include <stdio.h>

int main (int argc, char *argv[]) {
    int y; //year
    
    printf("input the year: ");
    scanf("%i", &y);

    printf("is the year %i the leap year? : %i\n", y, (y % 4 == 0 && y % 100 != 0)|| y % 400 == 0);

    return 0;
}