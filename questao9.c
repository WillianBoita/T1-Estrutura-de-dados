#include <stdio.h>

int main(){

  int matricula;
  float mediaGeral = 0, contador = 0;

  while (1) {
    float nota, media = 0;
    printf("Informe a matrícula do aluno: ");
    scanf("%d", &matricula);

    if(matricula == 0) {
      break;
    }

    for (int i = 0; i < 5; i++) {
      printf("Informe a nota %d do aluno: ", i + 1);
      scanf("%f", &nota);
      media += nota;
    }

    printf("Aluno: %d, Média: %.1f\n", matricula, media /= 5);
    mediaGeral += media;
    contador++;

  }

  printf("Média geral da turma: %.1f\n", mediaGeral /= contador);
  
  return 0;
}