#include <stdio.h>
int main(){
  float comprimento, altura, largura, volume;
  printf("Digite o comprimento da caixa retangular: ");
  scanf("%f",&comprimento);
  printf("Digite a altura da caixa retangular: ");
  scanf("%f",&altura);
  printf("Digite a largura da caixa retangular: ");
  scanf("%f",&largura);

  volume = comprimento * largura * altura;
  
  printf("O volume da caixa retangular é de: %.2f",volume);

  return 0;
}