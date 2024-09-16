#include<stdio.h>

int main() {
    float attendance = 0, assignments = 0, exam = 0, finalScore = 0;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    if (attendance < 80) {
        printf("Attendance is less than 80 percent. You are not eligible for grading.\n");
    } 
    else {
        printf("Enter assignment score out of 100: ");
        scanf("%f", &assignments);
        
        printf("Enter exam score out of 100: ");
        scanf("%f", &exam);

        
        finalScore =(assignments * 0.2) + (exam * 0.8);

        if (finalScore >= 90 && finalScore <= 100) {
            printf("Final Grade: A*\n");
        } 
        else if (finalScore >= 85 && finalScore < 90) {
            printf("Final Grade: A\n");
        } 
        else if (finalScore >= 80 && finalScore < 85) {
            printf("Final Grade: B+\n");
        } 
        else if (finalScore >= 70 && finalScore < 80) {
            printf("Final Grade: B\n");
        } 
        else if (finalScore >= 60 && finalScore < 70) {
            printf("Final Grade: C\n");
        } 
        else if (finalScore >= 50 && finalScore < 60) {
            printf("Final Grade: D\n");
        } 
        else {
            printf("Final Grade: F\n");
        }
    }

    return 0;
}
