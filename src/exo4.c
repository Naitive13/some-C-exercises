#include <stdio.h>
#include <string.h>

// the password set as a constant
#define PASSWORD "Hollywood"

void printName(int n, char name[]);
int passwordEntry(char name[]);

int main(int argc, char *argv[]) {
    // the number entered by the user and their name
    int x;
    char username[20];

    printf("enter a number: ");
    scanf("%d", &x);

    printName(x, username);
    passwordEntry(username);

    return 0;
}

// print the username n times
void printName(int n, char name[]) {
    printf("what's your name? ");
    scanf("%s", name);

    for (int i = 0; i < n; i++) {
        printf("%s \n", name);
    }
}

// ask the user to enter the password
int passwordEntry(char name[]) {
    // initializing i outside the `for loop`
    // so we can access its value after the loop
    int i = 1;
    char userPassword[9];

    for (; i < 3; ++i) {
        // the message to display for the first time
        if (i == 1) {
            printf("Welcome %s, please enter the password: ", name);
            scanf("%s", userPassword);
        }

        if (strcmp(PASSWORD, userPassword) == 0) {
            printf(
                "Well done %s, you got the password right in %d attempts! \n",
                name, i);
            return 0;
        } else {
            printf("Try again: ");
            scanf("%s", userPassword);
        }
    }

    printf("Bad luck %s, you took %d attempts, you are locked out! \n", name,
           i);
    return 0;
}
