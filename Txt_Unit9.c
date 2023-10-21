#include <stdio.h>

int main() {
    //define variables 
	char infilename[50], outfilename[50], fname[50], lname[50];
	int days, pennies;
	double dollars;
	FILE *infile, *outfile;

	//ask for names of input and output files
	printf("Give an input file name and an output filename: ");
	scanf("%s %s", infilename, outfilename);

	//open input file for read mode
	infile = fopen(infilename, "r");

	//print error and return 1 if file not found or not opened
	if(!infile) {
        printf("Input file not found.\n");
        return 1;
    }

    //open output file for writing mode
	outfile = fopen(outfilename, "w");

	//read first name, last name and number of days from input file
	fscanf(infile, "%s %s %d", fname, lname, &days);

	//write first name, last name and number of days to output file
	fprintf(outfile, "Pay for %s %s over the course of %d days:\n", fname, lname, days);
	
    //start with 1 penny
	pennies=1;

	//loop through days
	for(int day=1; day<=days; day++) {
        //pennies to dollars
        dollars = pennies / 100.0;
        //for output file
        fprintf(outfile, "Day %d: $%.2f\n", day, dollars);
        //2x pennies for every day
        pennies *= 2;
    }
    //close files
    fclose(infile);
    fclose(outfile);
    printf("Program has ended, output is in %s.\n", outfilename);
	return 0;
}
