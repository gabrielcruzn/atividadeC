#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "conta.h"

void consultarSaldo(ContaCorrente *conta) {
    printf("\nNome: %s", conta->nome);
    printf("Número da Conta: %d\n", conta->numeroConta);
    printf("Saldo disponível: R$ %.2f\n", conta->saldo);
    printf("\nPressione qualquer tecla para continuar...");
    getch();
}

void depositar(ContaCorrente *conta) {
    float valor;
    printf("\nDigite o valor para depósito: ");
    scanf("%f", &valor);
    conta->saldo += valor;
    printf("\nDepósito realizado com sucesso! Novo saldo: R$ %.2f\n", conta->saldo);
    printf("\nPressione qualquer tecla para continuar...");
    getch();
}

void sacar(ContaCorrente *conta) {
    float valor;
    printf("\nDigite o valor para saque: ");
    scanf("%f", &valor);

    if (valor > conta->saldo) {
        printf("\nSaldo insuficiente!\a\n"); 
    } else {
        conta->saldo -= valor;
        printf("\nSaque realizado com sucesso! Novo saldo: R$ %.2f\n", conta->saldo);
    }
    printf("\nPressione qualquer tecla para continuar...");
    getch();
}

void menu(ContaCorrente *conta) {
    int opcao;
    do {
        system("cls"); 
        printf("\n*** MENU ***\n");
        printf("1 - Consultar Saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                consultarSaldo(conta);
                break;
            case 2:
                depositar(conta);
                break;
            case 3:
                sacar(conta);
                break;
            case 4:
                printf("Saindo...\n");
                exit(0);
            default:
                printf("Opção inválida! Tente novamente.\n");
                getch();
        }
    } while (1);
}
