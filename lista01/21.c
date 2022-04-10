#include <stdio.h>

int main() {
  int x,y;
  printf("Digite um número inteiro: ");
  scanf("%d",&x);
  printf("Digite outro número inteiro: ");
  scanf("%d",&y);
  printf("%d é multiplo de %d: ",x,y);
  x % y ? printf("Não\n") : printf("Sim\n");

  return 0;
}