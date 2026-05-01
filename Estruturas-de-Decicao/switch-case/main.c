#include <stdio.h>

#define preco_resid_ate_500 0.40
#define preco_resid_maior_500 0.65
#define preco_comer_ate_1000 0.55
#define preco_comer_maior_1000 0.60
#define preco_ind_ate_5000 0.55
#define preco_ind_maior_5000 0.60

int main() {
  float potencia_hora = 0;
  char tipo_instalacao;
  float preco_total = 0;

  printf("======= BEM-VINDO =======\n");
  printf("Digite a potencia consumida por hora KW/h: ");

  if (scanf(" %f", &potencia_hora) != 1) {
    printf("Entrada invalida!");
    return 1;
  };
  
  printf("Digite R, C ou I para o tipo de instalacao, R = Residencial, C = Comercial, I = Industrial: ");
  scanf(" %c", &tipo_instalacao);

  switch (tipo_instalacao)
  {
  case 'R':
    printf("Funciona!");
    break;
  
  default:
    break;
  }
  
}
