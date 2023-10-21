// Program calculates grades in any course with weighted categories 

#include <stdio.h>

#define NUM_SCORES 10

int getScores(char title[], double scores[]);
double getWeightedAverage(double weight, int num_scores, double scores[]);

int main() {

    double program_scores[NUM_SCORES];
    double quiz_scores[NUM_SCORES];
    double exam_scores[NUM_SCORES];

    int num_programs = getScores("programs", program_scores);
    int num_quizzes = getScores("quizzes", quiz_scores);
    int num_exams = getScores("marks", exam_scores);

    double program_score = getWeightedAverage(0.6, num_programs, program_scores);
    double quiz_score = getWeightedAverage(0.1, num_quizzes, quiz_scores);
    double exam_score = getWeightedAverage(0.3, num_exams, exam_scores);

    printf("Your grades:\n");
    printf("Programs (60%%):\n%.2f\n\n", program_score);
    printf("Quizzes (10%%):\n%.2f\n\n", quiz_score);
    printf("Exams (30%%):\n%.2f\n\n", exam_score);

    double overall_score = program_score + quiz_score + exam_score;
    printf("Overall grade:\n%.2f%% ", overall_score);

    switch((int)overall_score) {
        case 90 ... 100:
            printf("(A)\n");
            break;
        case 80 ... 89:
            printf("(B)\n");
            break;
        case 70 ... 79:
            printf("(C)\n");
            break;
        case 60 ... 69:
            printf("(D)\n");
            break;
        case 0 ... 59:
            printf("(F)\n");
            break;
        default:
            printf("(?)\n");
            break;
    }

    return 0;
}

int getScores(char title[], double scores[]) {
    int num_scores;

    do {
        printf("How many %s have been graded? ", title);
        scanf("%d", &num_scores);
    } while(num_scores < 0 || num_scores > NUM_SCORES);

    printf("Enter %d %s grade(s): ", num_scores, title);

    for(int i = 0; i < num_scores; i++) {
        scanf("%lf", &scores[i]);
    }

    return num_scores;
}

double getWeightedAverage(double weight, int num_scores, double scores[]) {
    if(num_scores == 0) {
        return 100.0 * weight;
    }

    double sum = 0.0;

    for(int i = 0; i < num_scores; i++) {
        sum += scores[i];
    }

    double average = sum / num_scores;

    return average * weight;
}
