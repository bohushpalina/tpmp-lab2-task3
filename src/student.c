/*
 * Author:      Bohush Palina
 * Group:       11a
 */

#include <stdio.h>
#include <string.h>
#include "student.h"

void input_students(
        STUDENT         *stud_array,
        int             count
)
{
        int             i;
        int             j;

        /* Modifying data via pointer: filling the structure */
        for (i = 0; i < count; i++) {
                printf("Enter data for student %d\n", i + 1);
                
                printf("Surname and initials: ");
                fgets(stud_array[i].Name, NAME_LENGTH, stdin);
                /* Removing newline character after fgets */
                stud_array[i].Name[strcspn(stud_array[i].Name, "\n")] = '\0';

                printf("Course: ");
                scanf("%d", &stud_array[i].Kurs);

                printf("Enter 5 grades separated by space: ");
                for (j = 0; j < GRADES_COUNT; j++) {
                        scanf("%d", &stud_array[i].SES[j]);
                }
                
                /* Clearing the buffer from newline character for the next fgets */
                while (getchar() != '\n');
        }
}

void sort_students(
        STUDENT         *stud_array,
        int             count
)
{
        int             i;
        int             j;
        STUDENT         temp;                   /* Temporary variable for swapping  */

        /* Modifying array via pointer: sorting records alphabetically */
        /* Bubble sort is used for simplicity of structure swapping */
        for (i = 0; i < count - 1; i++) {
                for (j = 0; j < count - i - 1; j++) {
                        if (strcmp(stud_array[j].Name, stud_array[j + 1].Name) > 0) {
                                temp = stud_array[j];
                                stud_array[j] = stud_array[j + 1];
                                stud_array[j + 1] = temp;
                        }
                }
        }
}

float get_overall_average(
        const STUDENT   *stud_array,
        int             count
)
{
        int             i;
        int             j;
        int             total_sum = 0;          /* Total sum of all grades          */
        int             total_grades;           /* Total number of grades           */

        for (i = 0; i < count; i++) {
                for (j = 0; j < GRADES_COUNT; j++) {
                        total_sum += stud_array[i].SES[j];
                }
        }

        total_grades = count * GRADES_COUNT;

        return (float)total_sum / total_grades;
}

void print_top_students(
        const STUDENT   *stud_array,
        int             count,
        float           overall_avg
)
{
        int             i;
        int             j;
        int             student_sum;            /* Sum of current student's grades  */
        float           student_avg;            /* Average of current student       */
        int             found = 0;              /* Flag if target students found    */

        printf("\nOverall average score: %.2f\n", overall_avg);
        printf("Students with average score higher than overall:\n");

        for (i = 0; i < count; i++) {
                student_sum = 0;

                for (j = 0; j < GRADES_COUNT; j++) {
                        student_sum += stud_array[i].SES[j];
                }

                student_avg = (float)student_sum / GRADES_COUNT;

                /* Output data only if personal average exceeds overall */
                if (student_avg > overall_avg) {
                        printf("Student: %-20s | Course: %d | Average: %.2f\n",
                               stud_array[i].Name,
                               stud_array[i].Kurs,
                               student_avg);
                        found = 1;
                }
        }

        /* Unconventional situation: no student exceeded the overall average */
        if (!found) {
                printf("No students with average score higher than overall.\n");
        }
}
