#include <stdio.h>

int main (int argc, char *argv[]) {
    int h, m, s, t; //hour, minute, second, time

    printf("input the second : ");
    scanf("%i", &t);

    h = t / 3600;
    m = (t % 3600) / 60;
    s = t % 60;

    printf("The time for %i second is %i : %i : %i\n", t, h, m, s);

    return 0;
}