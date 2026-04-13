#include <stdio.h>

int main(){

  float salario, filhos, mediaSalarios = 0, mediaFilhos = 0, contador = 0;

  while (1) {
    printf("Informe o salário (menor que 0 para encerrar) e o número de filhos: \n");
    scanf("%f %f", &salario, &filhos);

    if (salario < 0) {
      break;
    }

    contador++;
    mediaFilhos += filhos;
    mediaSalarios += salario;
  }

  mediaSalarios /= contador;
  mediaFilhos /= contador;

  printf("Média salários: %.1f\n", mediaSalarios);
  printf("Média filhos: %.1f\n", mediaFilhos);
  
  return 0;
}