#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct vetor
{
  int *p;
  int qtd;
  float media;
};

void fillVector(int *p, int qtd);
float getAverage(int *p,int qtd,float media);
void printVector(int *p, int qtd);

int main()
{
  struct vetor vetor1;

  vetor1.qtd = 10;

  vetor1.p = malloc(sizeof(int)*vetor1.qtd);

  fillVector(vetor1.p,vetor1.qtd);
  printVector(vetor1.p,vetor1.qtd);
  puts("\n");
  float media = getAverage(vetor1.p,vetor1.qtd,vetor1.media);

  printf("%.2f\n",media);

  return 0;
}

void fillVector(int *p, int qtd)
{
  srand(time(NULL));
  for (int i = 0; i < qtd; i++)
  {
    *(p + i) = rand() % 20;
  }
}
float getAverage(int *p, int qtd, float media)
{
  media = 0;
  for (int i = 0; i < qtd; i++)
  {
    media += *(p + i);
  }
  media = media / qtd;
  return media;
}

void printVector(int *p, int qtd){
  for (int i = 0; i < qtd; i++)
  {
    printf("%d ",*(p + i));
  }
}