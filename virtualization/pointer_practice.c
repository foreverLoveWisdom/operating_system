#include "stdio.h"
#include "stdlib.h"

int main(void) {
  int var = 0;
  int var1 = 1;
  int *ptr = &var;
  int *ptr1 = &var1;
  printf("The value of the variable is %d", var);
  printf("\nThe memory address of var is %p", &var);
  printf("\nThe value of the pointer is %p", ptr);

  /* if (ptr == &var) { */
  /*   printf("\nThe pointer and the variable are pointing to the same memory " */
  /*          "address"); */
  /* } else { */
  /*   printf("\nThe pointer and the variable are pointing to different memory " */
  /*          "addresses"); */
  /* } */

  /* int *mall; */
  /* mall = malloc(sizeof(int)); */
  /* printf("\nThe value of mall is %p", mall); */
  /* printf("The value of the variable using the pointer is %d", *ptr); */
  /* printf("The address of the variable is %p", &var); */
  /* printf("The address of the pointer is %p", &ptr); */
  /* printf("The address of the variable using the pointer is %p", ptr); */
  /* printf("The address of the pointer using the pointer is %p", &ptr); */
}
