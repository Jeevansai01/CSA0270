#include <stdio.h>

union union_data {
  int int_val;
  float float_val;
};

int main() {
  union union_data data;

  printf("Enter a value (integer or float): ");
  if (scanf("%d", &data.int_val) == 1) {
    printf("You entered an integer: %d\n", data.int_val);
  } else if (scanf("%f", &data.float_val) == 1) {
    printf("You entered a float: %.2f\n", data.float_val);
  } else {
    printf("Invalid input\n");
  }

  return 0;
}