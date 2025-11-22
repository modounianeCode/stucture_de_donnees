#include<stdio.h>
struct Owner {
  char firstName[30];
  char lastName[30];
  int num_tel;
};
struct Car {
  char brand[30];
  int year;
  struct Owner owner; // Nested structure
};
int main() {
  struct Owner person = {"John", "Doe",774512589};
  struct Car car1 = {"Toyota", 2010, person};

  printf("Car: %s (%d)\n", car1.brand, car1.year);
  printf("Owner: %s %s %d\n", car1.owner.firstName, car1.owner.lastName,car1.owner.num_tel);

  return 0;
}
