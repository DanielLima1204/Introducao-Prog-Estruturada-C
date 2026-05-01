#include <stdio.h>

int main() {
    int senha = 1234;
    int senhaDigitada = 0;
    
    printf("Digite a senha: ");
    scanf("%d", &senhaDigitada);
    
    while(senhaDigitada != 1234) {
      printf("Informe a senha novamente: ");
      scanf("%d", &senhaDigitada);
  }
  printf("Login Completo!");
  return 0;
}