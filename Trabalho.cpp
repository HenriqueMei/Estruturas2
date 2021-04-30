//Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include "funcoes_AB.h"

arv* arvore = cria_arv(NULL,cria_arv_vazia(),cria_arv_vazia());
//Declaracoes
void menu();
void inserir();
void imprimir();
void SAIR();
int rotacaoDir();
int cria_arv();
int AVL();

//Chama menu principal
main()
{
	menu();
}

//Menu principal
void menu()
{
	system("cls");
	int option;
	printf("** MENU **");
	printf("\n\n1. Inserir");
	printf("\n2. imprimir");
	printf("\n9. SAIR\n");
	scanf("%i" , &option);
	switch(option){
		case 1 :
			inserir();
		break;
		case 2 :
			imprimir();
		break;
		case 9 :
			SAIR();
		break;
	}
}
//Nenu inserir
void inserir()
{
	float valor;
 	system("cls");
 	printf("Informe o valor: ");
 	scanf("%f" , &valor);
	printf("VALOR: %.2f" , valor);
	insere(arvore , valor);
    menu();
}
//Menu de imprimir
void imprimir()
{
	system("cls");
	printf("Pre ordem\n\n");
	imprime(arvore);
	printf("\n\n\n");
	system("pause");
	menu();
}
//Finalizar
void SAIR()
{
	exit(0);
}
//Criado por Henrique Mei - 826213
