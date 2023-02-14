#include <stdio.h>
#include <string.h>
#include <conio.h>

struct student {
  char name[100];
  int age;
  float marks;
};

int main() {
  char continue_flag = 'y';
  int i = 0;
  struct student s[100];

  while (continue_flag == 'y') {
    printf("Enter name of student %d: ", i + 1);
    scanf("%s", s[i].name);
    printf("Enter age of student %d: ", i + 1);
    scanf("%d", &s[i].age);
    printf("Enter marks of student %d: ", i + 1);
    scanf("%f", &s[i].marks);

    i++;
    printf("Do you want to continue? (y/n): ");
    scanf(" %c", &continue_flag);
  }

  printf("\nDetails of students:\n");
  for (int j = 0; j < i; j++) {
    printf("Name: %s\n", s[j].name);
    printf("Age: %d\n", s[j].age);
    printf("Marks: %.2f\n", s[j].marks);
    printf("\n");
  }
	getch();

  return 0;
}
