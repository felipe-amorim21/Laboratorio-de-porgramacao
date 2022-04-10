#include <stdio.h>

int main(){
  float raio;
  float pi = 3.14159;
  printf("Digite o raio do circulo: ");
  scanf("%f",&raio);
  printf("Seu diâmetro é igual a %.4f\n",2*raio);
  printf("O valor da circunferência é igual a %.4f\n",2*pi*raio);
  printf("A sua área é igual a %.4f\n",pi*raio*raio);
  return 0;
}