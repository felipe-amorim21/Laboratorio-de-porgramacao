#include <stdio.h>

int main() {
  int x;
  printf("Digite um número: ");
  scanf("%d",&x);

  printf("%d%d%d\n",(x%100)%10,x%100/10,x/100);




  return 0;
}