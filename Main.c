// Program is apart of unit 7 which includes 3 files: Main.c, Scores.c, Scores.h
// Program takes three doubles as input parameters and returns the average of the highest and lowest values given

#include "scores.h"
#include <stdio.h>

int main() {

    double num1 = getScore();
    double num2 = getScore();
    double num3 = getScore();

    double avg = getAdjustedAverage(num1, num2, num3);
    double high = highest(num1, num2, num3);
    double low = lowest(num1, num2, num3);

    printf("The average of %.2f and %.2f is: %.2f", low, high, avg);

    return 0;
}