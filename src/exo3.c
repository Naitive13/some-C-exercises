#include <stdio.h>
int main(int argc, char *argv[]) {
    // classification
    char fail[] = "FAIL";
    char third[] = "THIRD";
    char lowerSecond[] = "LOWER SECOND";
    char upperSecond[] = "UPPER SECOND";
    char first[] = "FIRST";

    int examScore;

    // will continue to prompt for grade until user enters -1
    while (examScore != -1) {
        printf("enter your exam score: ");
        scanf("%d", &examScore);

        // all possible output
        if (examScore <= 39) {
            printf("Your exam score is %d which is a %s \n", examScore, fail);
        } else if (examScore <= 49) {
            printf("Your exam score is %d which is a %s \n", examScore, third);
        } else if (examScore <= 59) {
            printf("Your exam score is %d which is a %s \n", examScore,
                   lowerSecond);
        } else if (examScore <= 69) {
            printf("Your exam score is %d which is a %s \n", examScore,
                   upperSecond);
        } else {
            printf("Your exam score is %d which is a %s \n", examScore, first);
        }
    }

    return 0;
}
