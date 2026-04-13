#include <stdio.h>

int main(){

  int inicio, fim, duracao; 

  printf("Informe a data de início e fim do evento (0 - 23): \n");
  scanf("%d %d", &inicio, &fim);

  if (inicio < fim) {
    duracao = fim - inicio;
  } else {
    duracao = fim - inicio + 24;
  }

  printf("Duração: %d\n", duracao);
  

  return 0;
}