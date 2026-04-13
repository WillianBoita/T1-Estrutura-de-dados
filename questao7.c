#include <stdio.h>

int main(){

  int n = 1;
  float porcentagem, contador = 0, entreDezVinte = 0;

  while (1) {
    printf("Informe um número (0 para encerrar): \n");
    scanf("%d", &n);

    if (n == 0) {
      break;
    }
    

    if (n >= 10 && n <= 20) {
      entreDezVinte++;
    }

    contador++;
  }

  porcentagem = (entreDezVinte / contador) * 100;
  
  printf("porcento entre 10 e 20: %.0f\n", porcentagem);
  
  return 0;
}