#include <stdio.h>

void adressBefore(int *a, int *b);
void adressAfter(int *a, int *b);

int main(int argc, char *argv[]) {
    int x, y;
    printf("enter the first number: ");
    scanf("%d", &x);

    printf("enter the second number: ");
    scanf("%d", &y);

    int *ptrX = &x;
    int *ptrY = &y;

    // sum
    adressBefore(ptrX, ptrY);
    printf("%d + %d = %d\n", *ptrX, *ptrY, *ptrX + *ptrY);
    adressAfter(ptrX, ptrY);

    // sub
    adressBefore(ptrX, ptrY);
    printf("%d - %d = %d\n", *ptrX, *ptrY, *ptrX - *ptrY);
    adressAfter(ptrX, ptrY);

    // mul
    adressBefore(ptrX, ptrY);
    printf("%d * %d = %d\n", *ptrX, *ptrY, *ptrX * *ptrY);
    adressAfter(ptrX, ptrY);

    // div
    adressBefore(ptrX, ptrY);
    printf("%d / %d = %d\n", *ptrX, *ptrY, *ptrX / *ptrY);
    adressAfter(ptrX, ptrY);

    return 0;
}

// functions to avoid long and repetitive code
void adressBefore(int *a, int *b) {
    printf("the adress of %d and %d before the calculations are : %p and %p \n",
           *a, *b, a, b);
}
void adressAfter(int *a, int *b) {
    printf("the adress of %d and %d after the calculations are : %p and %p \n",
           *a, *b, a, b);
}
