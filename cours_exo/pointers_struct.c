#include<stdio.h>
// Define a struct
struct Car {
  char brand[30];
  int year;
};

int main() {
  struct Car car = {"Toyota", 2020};

  // Declare a pointer to the struct
  struct Car *ptr = &car;

  // Access members using the -> operator
  printf("Brand: %p\n",ptr->brand);
  printf("Year: %p\n", ptr+1);
  printf("%p\n",ptr);
    printf("%p\n",ptr+1);
  return 0;
}
