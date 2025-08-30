/* Write a C program to generate grade system.
• If student has 70% or more than 70% then DISTINCTION.
• If student has percentage between 60 and 69 then FIRST CLASS.
• If student has percentage between 50 and 59 then SECOND CLASS.
• If student has percentage between 40 and 49 then PASS CLASS.
• If student has percentage less than 40 then FAIL */

#include <stdio.h>

int main() {
    float percentage;

    // Input student's percentage
    printf("Enter student's percentage: ");
    scanf("%f", &percentage);

    // Calculate grade group
    int gradeGroup;

    if (percentage >= 70) {
        gradeGroup = 1;  // Distinction
    } else if (percentage >= 60) {
        gradeGroup = 2;  // First Class
    } else if (percentage >= 50) {
        gradeGroup = 3;  // Second Class
    } else if (percentage >= 40) {
        gradeGroup = 4;  // Pass Class
    } else {
        gradeGroup = 5;  // Fail
    }

    // Use switch-case to determine the grade based on the grade group
    switch (gradeGroup) {
        case 1:
            printf("GRADE: DISTINCTION\n");
            break;
        case 2:
            printf("GRADE: FIRST CLASS\n");
            break;
        case 3:
            printf("GRADE: SECOND CLASS\n");
            break;
        case 4:
            printf("GRADE: PASS CLASS\n");
            break;
        case 5:
            printf("GRADE: FAIL\n");
            break;
        default:
            printf("Invalid percentage!\n");
    }

    return 0;
}




