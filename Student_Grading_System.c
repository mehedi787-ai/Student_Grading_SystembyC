#include <stdio.h>

int main() {
    int const MAX_STUDENTS = 100;
    int const MAX_SUBJECTS = 5;
    int numStudents, numSubjects;
    float marks[MAX_STUDENTS * MAX_SUBJECTS];
    float total, avg;
    char name[MAX_STUDENTS][50], id[MAX_STUDENTS][20], attendance;

    printf("Enter the number of students: ");   // Taking input for the number of students
    scanf("%d", &numStudents);
    printf("Enter the number of subjects: ");   // Taking input for the number of subjects
    scanf("%d", &numSubjects);

    for (int i = 0; i < numStudents; i++) {
        // Input student ID and name
        printf("\nEnter Student ID: ");
        scanf(" %s", id[i]);
        printf("Enter Student Name: ");
        scanf(" %s", name[i]);

        // Checking if the student is present
        printf("Is the student present? (y for Yes, n for No): ");
        scanf(" %c", &attendance);

        if (attendance == 'y') {
            printf("Student %s (ID: %s) is present.\n", name[i], id[i]);

            // Input marks for individual subjects
            total = 0;
            for (int j = 0; j < numSubjects; j++) {
                printf("Enter marks for subject %d: ", j + 1);
                scanf("%f", &marks[i * MAX_SUBJECTS + j]);
                total += marks[i * MAX_SUBJECTS + j];
            }
            avg = total / numSubjects;
            char grade[3]; // To hold grade symbols like "A+", "B-", etc.

            // Assigning grades based on the new grading policy
            if (avg >= 80)       sprintf(grade, "A+");
            else if (avg >= 75)  sprintf(grade, "A");
            else if (avg >= 70)  sprintf(grade, "A-");
            else if (avg >= 65)  sprintf(grade, "B+");
            else if (avg >= 60)  sprintf(grade, "B");
            else if (avg >= 55)  sprintf(grade, "B-");
            else if (avg >= 50)  sprintf(grade, "C+");
            else if (avg >= 45)  sprintf(grade, "C");
            else if (avg >= 40)  sprintf(grade, "D");
            else                sprintf(grade, "F");

            // Display student details
            printf("\nStudent: %s (ID: %s)\n", name[i], id[i]);
            printf("Total Marks: %.2f\n", total);
            printf("Average Marks: %.2f\n", avg);
            printf("Grade: %s\n", grade);
            printf("--------------------------\n");
        } else {
            printf("Student %s (ID: %s) is absent. Skipping marks entry.\n", name[i], id[i]);
        }
    }

    return 0;
}
