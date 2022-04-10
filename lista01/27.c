#include <math.h>
#include <stdio.h>

int main() {
  float a, b, c, d;
  printf("Digite o valor para a: ");
  scanf("%f", &a);
  printf("Digite o valor para b: ");
  scanf("%f", &b);
  printf("Digite o valor para c: ");
  scanf("%f", &c);
  printf("Média aritmética: %f", (a + b + c) / 3);
  printf("Média geométrica: %f", pow(a * b * c, 1 / 3));
  return 0;
}