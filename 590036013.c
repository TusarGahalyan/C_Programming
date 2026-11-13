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
#include <string.h>

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

    students[studentCount++] = s;
    printf("Student added successfully!\n");
}

void displayStudent(struct Student s) {
    printf("\nSAP ID: %d\n", s.sapID);
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Phone: %s\n", s.phone);
    printf("Email: %s\n", s.email);
    printf("Year: %d\n", s.year);
    printf("Semesters completed: %d\n", s.semestersCompleted);

    if (s.semestersCompleted == 0) {
        printf("CGPA: Not available yet\n");
    } else {
        float total = 0;

        for (int i = 0; i < s.semestersCompleted; i++) {
            printf("SGPA Semester %d: %.2f\n", i + 1, s.sgpa[i]);
            total += s.sgpa[i];
        }

        printf("Current CGPA: %.2f\n",
               total / s.semestersCompleted);
    }
}

void displayAllStudents(void) {
    if (studentCount == 0) {
        printf("No student records found.\n");
        return;
    }

    for (int i = 0; i < studentCount; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        displayStudent(students[i]);
    }
}

void searchStudent(void) {
    int id;

    printf("Enter SAP ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].sapID == id) {
            displayStudent(students[i]);
            return;
        }
    }

    printf("Student not found.\n");
}

void deleteStudent(void) {
    int id;

    printf("Enter SAP ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].sapID == id) {
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }

            studentCount--;
            printf("Student deleted successfully.\n");
            return;
        }
    }

    printf("Student not found.\n");
}

float calculateCGPA(struct Student s) {
    if (s.semestersCompleted == 0) {
        return -1.0f;
    }

    float total = 0.0f;

    for (int i = 0; i < s.semestersCompleted; i++) {
        total += s.sgpa[i];
    }

    return total / s.semestersCompleted;
}

void averageCGPAByYear(void) {
    for (int year = 1; year <= 4; year++) {
        float total = 0.0f;
        int count = 0;

        for (int i = 0; i < studentCount; i++) {
            if (students[i].year == year &&
                students[i].semestersCompleted > 0) {
                total += calculateCGPA(students[i]);
                count++;
            }
        }

        printf("\nYear %d: ", year);

        if (count == 0) {
            printf("No CGPA data available.\n");
        } else {
            printf("Average CGPA = %.2f\n", total / count);
        }
    }
}
void sortBySAPID(void) {
    for (int i = 0; i < studentCount - 1; i++) {
        for (int j = 0; j < studentCount - i - 1; j++) {
            if (students[j].sapID > students[j + 1].sapID) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("\nRecords sorted by SAP ID.\n");
    displayAllStudents();
}

void sortByName(void) {
    for (int i = 0; i < studentCount - 1; i++) {
        for (int j = 0; j < studentCount - i - 1; j++) {
            if (strcmp(students[j].name,
                       students[j + 1].name) > 0) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("\nRecords sorted by name.\n");
    displayAllStudents();
}

/* Simple AI-assisted academic advisor */
void academicAdvisor(void) {
    int id;
    int found = 0;

    printf("Enter SAP ID for academic advice: ");
    scanf("%d", &id);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].sapID == id) {
            found = 1;

            float cgpa = calculateCGPA(students[i]);

            printf("\n--- Academic Advisor ---\n");
            printf("Student: %s\n", students[i].name);

            if (cgpa < 0) {
                printf("Advice: No SGPA data is available yet.\n");
                printf("Recommendation: Focus on attending classes, "
                       "understanding concepts, and preparing for "
                       "the first semester.\n");
            } else if (cgpa >= 9.0) {
                printf("Performance: Excellent\n");
                printf("Advice: Maintain your study habits and "
                       "continue exploring advanced topics.\n");
            } else if (cgpa >= 7.5) {
                printf("Performance: Good\n");
                printf("Advice: Keep up your progress and "
                       "practise regularly.\n");
            } else if (cgpa >= 6.0) {
                printf("Performance: Needs Improvement\n");
                printf("Advice: Focus more on challenging subjects "
                       "and seek help when needed.\n");
            } else {
                printf("Performance: Requires Immediate Attention\n");
                printf("Advice: Meet your faculty advisor, identify "
                       "learning difficulties, and create a study plan.\n");
            }

            break;
        }
    }

    if (!found) {
        printf("Student not found.\n");
    }
}


int main(void) {
    int choice;

    do {
        printf("\n=== Student Record Management System ===\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Average CGPA by Year\n");
        printf("6. Sort by SAP ID\n");
        printf("7. Sort by Name\n");
        printf("8. Academic Advisor\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayAllStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: averageCGPAByYear(); break;
            case 6: sortBySAPID(); break;
            case 7: sortByName(); break;
            case 8: academicAdvisor(); break;
            case 0: printf("Program ended.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}
