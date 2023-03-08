#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 50

typedef struct {
    char name[50];
    int age;
    int id;
} Student;

int main() {
    Student students[MAX_STUDENTS];
    int num_students, i;

    printf("Wie viele Studenten sollen erfasst werden? (max. %d)\n", MAX_STUDENTS);
    scanf("%d", &num_students);

    if (num_students > MAX_STUDENTS) {
        printf("Maximale Anzahl von %d Studenten überschritten.\n", MAX_STUDENTS);
        exit(1);
    }

    for (i = 0; i < num_students; i++) {
        printf("Geben Sie den Namen, das Alter und die ID des Studenten %d ein:\n", i+1);
        scanf("%s %d %d", students[i].name, &students[i].age, &students[i].id);
    }

    printf("\nErfasste Studenten:\n");

    for (i = 0; i < num_students; i++) {
        printf("Name: %s, Alter: %d, ID: %d\n", students[i].name, students[i].age, students[i].id);
    }

    return 0;
}
