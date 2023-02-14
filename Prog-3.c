#include <stdio.h>
#include <string.h>
#include <conio.h>

struct student {
  char name[100];
  int age;
  float marks;
  float fees;
  float scholarship;
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

  // Sort the students in descending order of marks
  for (int j = 0; j < i - 1; j++) {
    for (int k = 0; k < i - j - 1; k++) {
      if (s[k].marks < s[k + 1].marks) {
        struct student temp = s[k];
        s[k] = s[k + 1];
        s[k + 1] = temp;
      }
    }
  }

  // Calculate fees and scholarship for each student
  int n = i;
  for (int j = 0; j < n; j++) {
    s[j].fees = 200000.0;
    if (j < 10) {
      s[j].scholarship = s[j].fees * 0.2;
    } else if (j >= 10 && j < 20) {
      s[j].scholarship = s[j].fees * 0.3;
    }else if (j >= 20 && j < 30) {
      s[j].scholarship = s[j].fees * 0.4;
    } else if (j >= 30 && j < 40) {
      s[j].scholarship = s[j].fees * 0.5;
    } else if (j >= 40 && j < 50) {
      s[j].scholarship = s[j].fees * 0.6;
    } else if (j >= 50 && j < 60) {
      s[j].scholarship = s[j].fees * 0.7;
    } else if (j >= 60 && j < 70) {
      s[j].scholarship = s[j].fees * 0.8;
    } else if (j >= 70 && j < 80) {
      s[j].scholarship = s[j].fees * 0.9;
    } else {
      s[j].scholarship = s[j].fees;
    }
  }

  printf("\nMerit list:\n");
  for (int j = 0; j < n; j++) {
    printf("%d. %s (%.2f) Fees: %.2f Scholarship: %.2f\n", j + 1, s[j].name, s[j].marks, s[j].fees, s[j].scholarship);
  }
	getch();

  return 0;
}
