#include <stdio.h>

#include "../include/menu.h"
#include "../include/conta.h"
#include "../include/operacoes.h"

void menuUsuario(int indice) {

    int opcao;

    do {

        printf("\n===== MENU USUARIO =====\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Transferir\n");
        printf("5 - Sair\n");

        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:
                consultarSaldo(indice);
                break;

            case 2:
                depositar(indice);
                break;

            case 3:
                sacar(indice);
                break;

            case 4:
                transferir(indice);
                break;

            case 5:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 5);
}

void menuPrincipal() {

    int opcao;
    int usuario;

    do {

        printf("\n===== ATM =====\n");
        printf("1 - Criar conta\n");
        printf("2 - Login\n");
        printf("3 - Sair\n");

        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:
                criarConta();
                break;

            case 2:

                usuario = login();

                if(usuario >= 0) {

                    printf("Login realizado!\n");

                    menuUsuario(usuario);

                } else {

                    printf("Conta ou senha incorreta!\n");
                }

                break;

            case 3:
                printf("Encerrando sistema...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 3);
}

