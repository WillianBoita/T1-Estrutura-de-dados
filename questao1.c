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

  printf("Horas Trabalhadas: %d\n", horas);
  printf("Valor da hora: %.2f\n", valor);
  printf("Salário: %.2f\n", salario);
  

  return 0;
}