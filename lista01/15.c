#include <stdio.h>

int main() {
  int dia;
  float salario;
  printf("Digite o total de dias trabalhados: ");
  scanf("%d",&dia);
  salario = 50.25 * dia;
  if(10 < dia & dia <= 20) {
    salario = salario + (float)20/100 * salario;
  }
  if(dia > 20) {
    salario = salario + (float)30/100 * salario;
  }

  /* imposto */
  salario = salario - (float)10/100 * salario;

  printf("Salário liquido = %.2f\n",salario);
  return 0;
}