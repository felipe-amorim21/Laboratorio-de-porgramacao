#include <stdio.h>

int main(){
  float vha,inss,salario;
  int hora;
  printf("Digite o valor da hora aula: ");
  scanf("%f",&vha);
  printf("Digite o total de horas trabalhadas: ");
  scanf("%d",&hora);
  printf("Digite o percentual de desconto do INSS: ");
  scanf("%f",&inss);

  salario = vha * hora;
  
  printf("O salario bruto será: %.2f\n",salario);

  salario = salario - (inss/100) * salario;

  printf("O salario liquido será: %.2f\n",salario);
    
  return 0;
}