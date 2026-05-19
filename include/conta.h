#ifndef CONTA_H
#define CONTA_H

typedef struct {
int numero;
char nome[100];
char senha[20];
float saldo;
} Conta;

extern Conta contas[100];
extern int totalContas;

void criarConta();
int login();

#endif 
