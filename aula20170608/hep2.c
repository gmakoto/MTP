#include <stdio.h>
#include <stdlib.h>

void preenche(float * elemento) {
  scanf("%f", elemento);
}

void imprime(float **matriz, int N, int M) {
  int i, j;
  printf("matriz %dx%d:\n", N, M);
  for(i = 0; i < N; i++)
  {
    for(j = 0; j < M; j++)
      printf("%g\t", matriz[i][j]);
      printf("\n");
  }
}

void transposta(float **matriz, int N, int M) {
  int i, j;
  printf("matriz %dx%d transposta:\n", N, M);
  for(i = 0; i < M; i++)
  {
    for(j = 0; j < N; j++)
      printf("%g\t", matriz[j][i]);
      printf("\n");
  }
}

int main() {
  int i, j;
  int N, M;
  float **matriz;
  printf("Entre com a ordem da matriz, no formato 'NxM': ");
  scanf("%dx%d", &N, &M);
  matriz = calloc(N,sizeof(float*));
  for(i = 0; i < N; i++) {
	matriz[i] = calloc(M,sizeof(float));
    for(j = 0; j < M; j++) {
      printf("Elemento (%d,%d): ", i, j);
      preenche(&matriz[i][j]);
    }
  }
  imprime(matriz, N, M);
  transposta(matriz, N, M);
  for(i = 0; i < N; i++)
	free(matriz[i]);
  free(matriz);
  return 0;
}
