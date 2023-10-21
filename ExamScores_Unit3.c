// program outputs the average of any given 3 exam scores 
// look to readme to find correct formatting for input :)


#include<stdio.h>
int main()
{

float score1,score2,score3,average;

printf("Please enter three exam scores: ");

scanf("%f%f%f",&score1,&score2,&score3);

average=(score1+score2+score3)/3.0;

printf("First exam: \t\t%g%%\n",score1);
printf("Second exam:\t\t%g%%\n",score2);
printf("Third exam: \t\t%g%%\n",score3);
printf("------------------------------------\n");

printf("Average:\t\t%g\%%",average);
return 0;
}