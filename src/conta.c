#include <stdio.h>
#include <string.h>
#include "../include/conta.h"

Conta contas[100];
int totalContas = 0;

void criarConta() {

    Conta nova;

    printf("Numero da conta: ");
    scanf("%d", &nova.numero);

    printf("Nome: ");
    scanf(" %[^\n]", nova.nome);

    printf("Senha: ");
    scanf("%s", nova.senha);

    nova.saldo = 0;

    contas[totalContas] = nova;
    totalContas++;

    printf("Conta criada com sucesso!\n");
}

int login() {

    int numero;
    char senha[20];

    printf("Numero da conta: ");
    scanf("%d", &numero);

    printf("Senha: ");
    scanf("%s", senha);

    for(int i = 0; i < totalContas; i++) {

        if(contas[i].numero == numero &&
           strcmp(contas[i].senha, senha) == 0) {

            return i;
        }
    }

    return -1;
}

