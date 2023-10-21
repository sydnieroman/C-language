// Program is apart of unit 7 which includes 3 files: Main.c, Scores.c, Scores.h
// Program takes three doubles as input parameters and returns the average of the highest and lowest values given

#include "scores.h"

//getScore
double getScore() {
    
    double score;

    printf("Enter a grade between 0 and 100? ");
    scanf("%lf", &score);
    
    while(score < 0 || score > 100) {
        printf("Invalid value, Enter a value between 0 and 100: ");
        scanf("%lf", &score);
    }
    
    return score;
}

//highest
double highest(double a, double b, double c) {
    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    return c;
}

//lowest
double lowest(double a, double b, double c) {
    if(a <= b && a <= c)
        return a;
    else if(b <= a && b <= c)
        return b;
    return c;
}

//getAdjustedAverage
double getAdjustedAverage(double a, double b, double c) {
    return (lowest(a, b, c) + highest(a, b, c)) / 2;
}