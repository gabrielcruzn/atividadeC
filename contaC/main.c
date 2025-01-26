#include <stdio.h>
#include <stdlib.h>
#include "conta.h"

int main() {
    ContaCorrente conta;

    printf("Digite o nome do correntista: ");
    fflush(stdin);
    fgets(conta.nome, sizeof(conta.nome), stdin);

    printf("Digite o número da conta: ");
    scanf("%d", &conta.numeroConta);
    
    printf("Digite o valor para depósito inicial: ");
    scanf("%f", &conta.saldo);

    menu(&conta);

    return 0;
}
