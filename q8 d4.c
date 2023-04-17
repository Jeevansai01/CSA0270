#include <stdio.h>

union union_student {
  char name[50];
  float gpa;
};

int main() {
  union union_student student;

  printf("Enter student's name: ");
  fgets(student.name, sizeof(student.name), stdin);

  printf("Enter student's GPA: ");
  scanf("%f", &student.gpa);

  printf("Student's name: %s", student.name);
  printf("Student's GPA: %.2f\n", student.gpa);

  return 0;
}
