#include <stdio.h>

struct Student
{
    char name[50];
    char id[20];
    float FundamentalComputer;
    float SPL;
    float Calculus;
    char attendance;
};

int main()
{
    int n;
    struct Student s;

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); // clear input buffer

    for (int i = 0; i < n; i++)
    {
        puts("\nEnter student name:");
        gets(s.name);

        puts("Enter student ID:");
        gets(s.id);

        puts("Is the student present? (y/n):");
        scanf(" %c", &s.attendance);
        getchar();

        switch (s.attendance)
        {
        case 'y':
        case 'Y':
            printf("Enter marks for Fundamental Computer: ");
            scanf("%f", &s.FundamentalComputer);
            printf("Enter marks for SPL: ");
            scanf("%f", &s.SPL);
            printf("Enter marks for Calculus: ");
            scanf("%f", &s.Calculus);
            getchar();

            float total = s.FundamentalComputer + s.SPL + s.Calculus;
            float avg = total / 3.0;

            printf("\nStudent: %s (ID: %s)\n", s.name, s.id);
            printf("Total: %.2f\n", total);
            printf("Average: %.2f\n", avg);

            printf("Grade: ");
            if (avg >= 80)
            {
                printf("A+\n");
            }
            else if (avg >= 75)
            {
                printf("A\n");
            }
            else if (avg >= 70)
            {
                printf("A-\n");
            }
            else if (avg >= 65)
            {
                printf("B+\n");
            }
            else if (avg >= 60)
            {
                printf("B\n");
            }
            else if (avg >= 55)
            {
                printf("B-\n");
            }
            else if (avg >= 50)
            {
                printf("C+\n");
            }
            else if (avg >= 45)
            {
                printf("C\n");
            }
            else if (avg >= 40)
            {
                printf("D\n");
            }
            else
            {
                printf("F\n");
            }

            break;

        case 'n':
        case 'N':
            printf("Student %s (ID: %s) is absent.\n", s.name, s.id);
            break;

        default:
            puts("Invalid input for attendance.");
        }
    }

    return 0;
}
