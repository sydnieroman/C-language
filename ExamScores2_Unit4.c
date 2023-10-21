//Program takes the names and test scores from 3 different students and outputs the information and avgerage scores for each

#include<stdio.h>

int main(){

char firstUser[50];
char secondUser[50];
char thirdUser[50];

double user1exam1, user1exam2, user1exam3;
double user2exam1, user2exam2, user2exam3;
double user3exam1, user3exam2, user3exam3;

double avg1, avg2, avg3;

printf("Please enter a user name and three exam scores separated by commas for user 1:\n");
scanf("%s %lf, %lf, %lf", &firstUser, &user1exam1, &user1exam2, &user1exam3);

printf("Please enter a user name and three exam scores separated by commas for user 2:\n");
scanf("%s %lf, %lf, %lf", &secondUser, &user2exam1, &user2exam2, &user2exam3);

printf("Please enter a user name and three exam scores separated by commas for user 3:\n");
scanf(" %s %lf, %lf, %lf", &thirdUser, &user3exam1, &user3exam2, &user3exam3);


avg1 = (user1exam1 + user1exam2 + user1exam3)/3;
avg2 = (user2exam1 + user2exam2 + user2exam3)/3;
avg3 = (user3exam1 + user3exam2 + user3exam3)/3;

printf("%-10s%8s%8s%8s%8s\n","Name","Exam1","Exam2","Exam3","Average");

printf("%-10s%8.2lf%8.2lf%8.2lf%7.1lf%%\n",firstUser, user1exam1,user1exam2, user1exam3,avg1);
printf("%-10s%8.2lf%8.2lf%8.2lf%7.1lf%%\n",secondUser, user2exam1,user2exam2, user2exam3,avg2);
printf("%-10s%8.2lf%8.2lf%8.2lf%7.1lf%%\n",thirdUser, user3exam1,user3exam2, user3exam3,avg3);
}

