/*
 * Author:      Bohush Palina
 * Group:       11a
 */

#include <stdio.h>
#include "student.h"

int main(void)
{
        STUDENT         STUD[MAX_STUDENTS];     /* Array of student records         */
        float           overall_avg;            /* Overall average score            */

        input_students(
                STUD,
                MAX_STUDENTS
        );

        sort_students(
                STUD,
                MAX_STUDENTS
        );

        overall_avg = get_overall_average(
                STUD,
                MAX_STUDENTS
        );

        print_top_students(
                STUD,
                MAX_STUDENTS,
                overall_avg
        );

        return 0;
}
