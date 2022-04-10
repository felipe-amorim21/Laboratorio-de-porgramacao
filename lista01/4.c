#include <stdio.h>

int main() {
  int a;
  printf("Digite um valor: ");
  scanf("%d",&a);
  printf("Seu triplo: %d\n",3 * a);
  printf("Seu quadrado: %d\n", a * a);
  printf("Seu meio: %.2f\n",(float)a/2);


  return 0;
}