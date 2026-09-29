#include <stdio.h>

int main (int argc, char *argv[]) {
    int x, m, s; //minute, second
    
    printf("input the second: ");
    scanf("%i", &x);

    m = x / 60;
    s = x % 60;

    printf("the time is %d : %d\n", m, s);

    return 0;
}