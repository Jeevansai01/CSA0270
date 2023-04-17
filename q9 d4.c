#include <stdio.h>

#define PI 3.14159265358979323846

union union_shape {
  float radius;
  struct {
    float length;
    float width;
  } rectangle;
};

int main() {
  union union_shape shape;
  char shape_type;

  printf("Enter shape type (c for circle, r for rectangle): ");
  scanf("%c", &shape_type);

  if (shape_type == 'c') {
    printf("Enter radius of circle: ");
    scanf("%f", &shape.radius);

    printf("Area of circle: %.2f\n", PI * shape.radius * shape.radius);
  } else if (shape_type == 'r') {
    printf("Enter length of rectangle: ");
    scanf("%f", &shape.rectangle.length);

    printf("Enter width of rectangle: ");
    scanf("%f", &shape.rectangle.width);

    printf("Area of rectangle: %.2f\n", shape.rectangle.length * shape.rectangle.width);
  } else {
    printf("Invalid shape type\n");
  }

  return 0;
}
