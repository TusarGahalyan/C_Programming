/*Student Record and Result Management System

1)    Create a console-based application using C programming language.
2)    The program should be menu-driven.
3)    At least record of 5 students should be maintained in a program.
4)    The application should include the below functions:

a)     Addition of Student details such as SAP ID, Roll No. Name, Phone no., 
       Email ID, Year (1st, 2nd, 3rd or 4th), Semester, SGPA in each semester (total eight semesters should be considered).
b)    Searching and displaying of the student record that the user wishes to see.
c)     Function that calculates the CGPA of each student (Note: CGPA can be calculated by taking the average of SGPA of that student).
d)    Function that can calculate the average CGPA of all the students of each year.
e)     Function to display the record of all the students of the University.
f)     Function to delete the record of an individual student if he/ she leaves the University.
g)    Function to display the record of all the students in increasing order of their SAP ID.
h)    Function to display the record of all the students in increasing order of their Name.
*/


#include <stdio.h>

#define MAX_STUDENTS 5
#define SEMESTERS 8

struct Student {
    int sapID;
    int rollNo;
    char name[50];
    char phone[16];
    char email[60];
    int year;
    float sgpa[SEMESTERS];
    int semestersCompleted;
};

struct Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent(void) {
    if (studentCount >= MAX_STUDENTS) {
        printf("Student limit reached!\n");
        return;
    }

    struct Student s = {0};

    printf("Enter SAP ID: ");
    scanf("%d", &s.sapID);

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name (one word): ");
    scanf("%49s", s.name);

    printf("Enter Phone Number: ");
    scanf("%15s", s.phone);

    printf("Enter Email ID: ");
    scanf("%59s", s.email);

    printf("Enter Year (1-4): ");
    scanf("%d", &s.year);

    if (s.year < 1 || s.year > 4) {
        printf("Invalid year!\n");
        return;
    }

    printf("Enter semesters completed (0-8): ");
    scanf("%d", &s.semestersCompleted);

    if (s.semestersCompleted < 0 ||
        s.semestersCompleted > 8) {
        printf("Invalid semester count!\n");
        return;
    }

    for (int i = 0; i < s.semestersCompleted; i++) {
        do {
            printf("Enter SGPA for semester %d (0-10): ", i + 1);
            scanf("%f", &s.sgpa[i]);

            if (s.sgpa[i] < 0 || s.sgpa[i] > 10) {
                printf("SGPA must be between 0 and 10.\n");
            }
        } while (s.sgpa[i] < 0 || s.sgpa[i] > 10);
    }

    students[studentCount] = s;
    studentCount++;

    printf("Student added successfully!\n");
}

int main(void) {
    printf("Student Record and Result Management System\n");
    addStudent();
    return 0;
}
 
