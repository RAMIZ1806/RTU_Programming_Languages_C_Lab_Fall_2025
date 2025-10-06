/*
 * week4_3_struct_database.c
 * Author: [Ramiz Aliyev]
 * Student ID: [241ADB142]
 * Description:
 *   Simple in-memory "database" using an array of structs.
 *   Students will use malloc to allocate space for multiple Student records,
 *   then input, display, and possibly search the data.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: Define struct Student with fields name, id, grade
struct Student {
    char name[50];
    int id;
    float grade;
};
int main() {
    struct Student *students = NULL;
    int n;

   
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }
 students = (struct Student *)malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

  
    for (int i = 0; i < n; i++) {
        printf("Enter data for student %d (Name ID Grade): ", i + 1);
        
        if (scanf("%s %d %f", students[i].name, &students[i].id, &students[i].grade) != 3) {
            printf("Invalid input format.\n");
            free(students);
            return 1;
        }
    }

   
    printf("\n%-6s %-12s %-5s\n", "ID", "Name", "Grade");
    for (int i = 0; i < n; i++) {
        printf("%-6d %-12s %.1f\n", students[i].id, students[i].name, students[i].grade);
    }

   
    free(students);
    // TODO: Allocate memory for n Student structs using malloc

    // TODO: Read student data in a loop

    // TODO: Display all student records in formatted output

    // Optional: Compute average grade or find top student

    // TODO: Free allocated memory

    return 0;
}
