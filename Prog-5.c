#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define MAX_STUDENTS 100
#define NAME_LEN 100

typedef struct {
    char name[NAME_LEN];
    int age;
    float marks;
    float fees;
    float scholarship;
} student;

int compare_student(const void *a, const void *b) {
    student *x = (student *)a;
    student *y = (student *)b;
    return y->marks - x->marks;
}

int main() {
    student s[MAX_STUDENTS];
    int n, i, j;
    char continue_flag;
    float fees = 200000;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter the age of student %d: ", i + 1);
        scanf("%d", &s[i].age);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%f", &s[i].marks);
        s[i].fees = fees;
    }

    qsort(s, n, sizeof(student), compare_student);

    int scholarship_interval = n / 10;
    float scholarship_rate = 0.2;
    for (i = 0; i < n; i++) {
        if (i % scholarship_interval == 0 && scholarship_rate < 1) {
            scholarship_rate += 0.1;
        }
        s[i].scholarship = s[i].fees * scholarship_rate;
        s[i].fees -= s[i].scholarship;
    }

    printf("\n");
    printf("Name\t\tAge\tMarks\t\tFees\t\tScholarship\n");
    for (i = 0; i < n; i++) {
        printf("%s\t\t%d\t%.2f\t\t%.2f\t\t%.2f\n", s[i].name, s[i].age, s[i].marks, s[i].fees, s[i].scholarship);
    }
	getch();

    return 0;
}
