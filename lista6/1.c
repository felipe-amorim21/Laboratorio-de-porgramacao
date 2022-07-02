#include <stdio.h>
#include <stdlib.h>

struct aluno {
  float n1;
  float n2;
  float media;
};

int main() {
  struct aluno aln;

  puts("Nota 1: ");
  scanf("%f",&aln.n1);

  puts("Nota 2: ");
  scanf("%f",&aln.n2);

  aln.media = (aln.n1 + aln.n2) / 2;

  printf("N1: %.2f\nN2: %.2f\nMédia: %.2f\n",aln.n1,aln.n2,aln.media);
  return 0;
}