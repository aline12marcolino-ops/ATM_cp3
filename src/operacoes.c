#include <stdio.h>
#include "../include/conta.h"
#include "../include/operacoes.h"

void consultarSaldo(int indice) {

    printf("Saldo: R$ %.2f\n",
           contas[indice].saldo);
}

void depositar(int indice) {

    float valor;

    printf("Valor para deposito: ");
    scanf("%f", &valor);

    if(valor > 0) {

        contas[indice].saldo += valor;

        printf("Deposito realizado!\n");

    } else {

        printf("Valor invalido!\n");
    }
}

void sacar(int indice) {

    float valor;

    printf("Valor para saque: ");
    scanf("%f", &valor);

    if(valor <= contas[indice].saldo) {

        contas[indice].saldo -= valor;

        printf("Saque realizado!\n");

    } else {

        printf("Saldo insuficiente!\n");
    }
}

void transferir(int indice) {

    int contaDestino;
    float valor;

    printf("Conta destino: ");
    scanf("%d", &contaDestino);

    printf("Valor: ");
    scanf("%f", &valor);

    for(int i = 0; i < totalContas; i++) {

        if(contas[i].numero == contaDestino) {

            if(valor <= contas[indice].saldo) {

                contas[indice].saldo -= valor;
                contas[i].saldo += valor;

                printf("Transferencia realizada!\n");

            } else {

                printf("Saldo insuficiente!\n");
            }

            return;
        }
    }

    printf("Conta nao encontrada!\n");
}
