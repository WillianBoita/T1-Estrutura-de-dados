#include <stdio.h>

int main(){

  int horas;
  float valor, salario;

  printf("Informe o número de horas trabalhadas, e o valor da hora: ");
  scanf("%d %f", &horas, &valor);

  salario = horas * valor;

  if (horas > 200)
  {
    salario *= 1.1;
  }

  printf("Horas Trabalhadas: %d", horas);
  printf("Valor da hora: %f", valor);
  printf("Salário: %f", salario);
  

  return 0;
}