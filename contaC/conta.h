#ifndef CONTA_H
#define CONTA_H

typedef struct {
    char nome[100];
    int numeroConta;
    float saldo;
} ContaCorrente;

void consultarSaldo(ContaCorrente *conta);
void depositar(ContaCorrente *conta);
void sacar(ContaCorrente *conta);
void menu(ContaCorrente *conta);

#endif

