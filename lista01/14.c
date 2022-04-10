#include <stdio.h>

int main() {
  float c,f;
  printf("Digite o valro da temperatura em celsius: ");
  scanf("%f",&c);
  f = (9 * c + 160) / 5;
  printf("A temperatura convertida é de: %.2f",f);
  
  return 0;
} 