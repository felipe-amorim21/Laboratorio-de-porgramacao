#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Aluno
{
  float n1;
  float n2;
  float media;
};

float randFloat();
float media(struct Aluno a);

int main()
{

  struct Aluno aln[3];

  for (int i = 0; i < 3; i++)
  {
    printf("Aluno %d: \n", i);
    aln[i].n1 = randFloat();
    aln[i].n2 = randFloat();
    aln[i].media = media(aln[i]);
    printf("Nota 1: %.2f\n", aln[i].n1);
    printf("Nota 2: %.2f\n", aln[i].n2);
    printf("Média: %.2f\n", aln[i].media);
  }

  return 0;
}

float randFloat()
{
  return ((float)rand() / (float)RAND_MAX) * 10;
}

float media(struct Aluno a){
  return ((a.n1 + a.n2)/2);
}