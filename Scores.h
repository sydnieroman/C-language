// Program is apart of unit 7 which includes 3 files: Main.c, Scores.c, Scores.h
// Program takes three doubles as input parameters and returns the average of the highest and lowest values given

#ifndef __NUMBER__
#define __NUMBER__

#include <stdio.h>

double getScore();

double highest(double a, double b, double c);

double lowest(double a, double b, double c);

double getAdjustedAverage(double a, double b, double c);

#endif
