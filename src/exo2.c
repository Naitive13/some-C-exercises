#include <stdio.h>
int main(int argc, char *argv[]) {
    // your name
    char name[20];
    printf("enter your name: ");
    scanf("%s", name);

    // the first number
    int x;
    printf("enter the first number: ");
    scanf("%d", &x);

    // the second number
    int y;
    printf("enter the second number: ");
    scanf("%d", &y);
    printf("\n");

    // sum
    printf("%s has entered %d and %d, ", name, x, y);
    printf("%d + %d equals %d \n", x, y, x + y);

    // sub
    printf("%s has entered %d and %d, ", name, x, y);
    printf("%d - %d equals %d \n", x, y, x - y);

    // mul
    printf("%s has entered %d and %d, ", name, x, y);
    printf("%d * %d equals %d \n", x, y, x * y);

    // div
    printf("%s has entered %d and %d, ", name, x, y);
    printf("%d / %d equals %d \n", x, y, x / y);

    return 0;
}
