#include <stdio.h>

int main(){

  int formaPagamento;
  float preco;

  printf("Informe a forma de pagamento (1 - à vista; 2 - à prazo), e o valor do produto: \n");
  scanf("%d %f", &formaPagamento, &preco);

  if (formaPagamento == 1)
  {
    preco *= 0.95;
    printf("Preço à vista: %f\n", preco);
  } else {
    preco *= 1.1;
    printf("Preço à prazo: %f\n", preco);
  }

  return 0;
}