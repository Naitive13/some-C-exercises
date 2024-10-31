#include <stdio.h>

int main(int argc, char *argv[]) {
    // random studentID (please change this)
    char studentID[] = "ID12345";
    // your name?
    char name[] = "Liane";
    // your degree?
    char degree[] = "Computer Science";

    // replace the numbers with the numbers on your studentID
    int sum = 1 + 2;
    int sub = 3 - 4;
    int mul = 4 * 5;
    int div = 4 / 2;

    printf("Hello, my name is %s, I'm a %s student and my studentID is %s. \n",
           name, degree, studentID);
    printf("I'm studying this programme because I'm interested in "
           "Cybersecurity. \n");

    return 1;
}
