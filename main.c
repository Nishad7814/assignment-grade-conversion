#include <stdio.h>

// Declare the external assembly function
extern void grade_converter(int percentage_grade);

int main() {
    int percentage_grade;

    // Take input from the user (percentage grade)
    printf("Enter your percentage grade: ");
    scanf("%d", &percentage_grade);

    // Call the assembly function to convert and print the letter grade message
    grade_converter(percentage_grade);

    return 0;
}
