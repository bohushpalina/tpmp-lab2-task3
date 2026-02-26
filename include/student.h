/*
 * Author:      Bohush Palina
 * Group:       11a
 */

#ifndef STUDENT_H
#define STUDENT_H

#define MAX_STUDENTS    10
#define NAME_LENGTH     50
#define GRADES_COUNT    5

typedef struct {
        char            Name[NAME_LENGTH];      /* Student's surname and initials   */
        int             Kurs;                   /* Year of study                    */
        int             SES[GRADES_COUNT];      /* Academic performance (grades)    */
} STUDENT;

/* Function prototypes ordered by abstraction level */
void input_students(
        STUDENT         *stud_array,
        int             count
);

void sort_students(
        STUDENT         *stud_array,
        int             count
);

float get_overall_average(
        const STUDENT   *stud_array,
        int             count
);

void print_top_students(
        const STUDENT   *stud_array,
        int             count,
        float           overall_avg
);

#endif 
