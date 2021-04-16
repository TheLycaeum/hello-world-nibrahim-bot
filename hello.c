#include <stdio.h>
#include <cs50.h>

int main(void) {
  int x;  /* = get_int("Enter a number "); */
  printf("Enter a number ");
  scanf("%i", &x);
  printf("I got %i\n", x);
}
