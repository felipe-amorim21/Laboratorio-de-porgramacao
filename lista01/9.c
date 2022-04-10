#include <stdio.h>

int main() {
  int a;
  printf("Digite um valor: ");
  scanf("%d",&a);
  printf("O seu sucessor é: %d\n",a+1);
  printf("O seu antecesssor é: %d\n",a-1);

  return 0;
}