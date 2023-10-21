// Program will prompt for 3 retiree's years of service and highest paying salaries
// program will output the retiree's social security payment each month

#include<stdio.h>

void print_benefits (int counter){
	int years; 
	double h1, h2, h3, avg, receive;
	
	//prompt
	printf("Enter retiree %d\'s years of service and 3 years highest salaries:\n", counter);
	
    //scanning users input for the data and computing the output
	scanf("%d %lf %lf %lf", &years, &h1, &h2, &h3);
	avg = (h1+h2+h3)/3;
	receive = avg * years * 0.02/12;
	printf("Retiree: %d will receive %.2lf/month\n", counter, receive);
}

int main(){
	
	int counter = 1;
	while(counter<=3){
		print_benefits(counter);
		counter++;
	}
}
