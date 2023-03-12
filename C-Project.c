/*
C - Programming - Project

Group Members :-
    (1). AYUSH KUMAR           (22bec036)
    (2). ASHISH KUMAR          (22bec032)
    (3). Burhan Ud Deen Bhat   (22bec039)
    (4). Hariom Kumar Sah      (22bec047)
    (5). Md. Sawez Faisal      (22bec061)


Date of Submission :- 13-March-2023

      Teacher : -  Dr. Amit Kant Pandit
*/




#include <stdio.h>
#include <string.h>
#include <conio.h>

#define FEE 175000.00


void meritList(int x,int y, int z);
void feeSection(int n,int j);
void outputSection(int n);


// Using Structure to store Student's Detail

struct student {
  char name[20];
  int roll_number;
  float marks;
  float fees;
  float scholarship;
  float newFees;
}stud[100]; // stud is the variable of Structure Student with array length 100


int main(){
    char flag = 'y';
  int x = 0, y = 0, z = 0,j=0;

  while (flag == 'y') {
    printf("Enter name of student %d: ", z + 1);
    scanf("%s", stud[z].name);
    printf("Enter Roll Number of student %d: ", z + 1);
    scanf("%d", &stud[z].roll_number);
    printf("Enter marks of student %d: ", z + 1);
    scanf("%f", &stud[z].marks);

    z++;
    printf("Do you want to continue? (y/n): ");
    scanf(" %c", &flag);
  }
    meritList(x,y,z);   // Calling meritList Function
    feeSection(z,j);    // Calling feeSection Function
    outputSection(z);   // Calling outputSection Function


 return 0;   
}

void meritList(int x,int y,int z){
    for (x = 0; x < z - 1; x++) {
    for (y = 0; y < z - x - 1; y++) {
      if (stud[y].marks < stud[y + 1].marks) {
        struct student temp = stud[y];
        stud[y] = stud[y + 1];
        stud[y + 1] = temp;
      }
    }
  }

}

void feeSection(int n,int j){
  for (j = 0; j < n; j++) {
    stud[j].fees = FEE;   // FEE is getting value from define FEE 175000
    stud[j].newFees = stud[j].fees * ((n-1) - j) / n;
    stud[j].scholarship = stud[j].fees - stud[j].newFees;
  }

}

void outputSection(int n){
    printf("\nMerit list:\n");
  for (int j = 0; j < n; j++) {
    printf("%d. %s (%.2f) \tFees: %.2f \tScholarship: %.2f\t Revised Fees: %.2f\n", j + 1, stud[j].name, stud[j].marks, stud[j].fees, stud[j].scholarship,stud[j].newFees);
  }
}