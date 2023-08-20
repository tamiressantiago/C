#include <stdio.h>
#include <stdlib.h>

int main() {

  int num1, num2, num3, maiorab;
  scanf("%d %d %d", &num1, &num2, &num3);

  maiorab = (num1 + num2 + abs(num1 - num2)) / 2;
  maiorab = (maiorab + num3 + abs(maiorab - num3)) / 2;
    
  printf("%d eh o maior\n", maiorab);

  return 0;
}