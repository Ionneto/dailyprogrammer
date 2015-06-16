#include <stdio.h>
#include <stdlib.h>

void adiciona(char *evento){
	printf("%s\n", *evento);
}

void deleta(int evento){}

void imprime(){}

int main() {
	int option;
	char *aux;
	while(1){
		//pede entrada, opções 1, 2, 3 + tratamento
		printf("Escolha uma opção:\n 1) Adicionar \n 2) Apagar \n 3) Ver\n");
		scanf("%d", &option );
		printf("%d\n", option );
		
		if(option == 1) {
			printf("Insira a tarefa a adicionar\n");
			scanf("%s", &aux);
			printf("%s\n", aux[1] );
			//adiciona(aux);
		}
		/*
			If entrada adição:
				Adiciona um evento novo no array
			If entrada delete:
				Remove evento x da lista, acha por numero
			If entrada mostrar:
				Imprime todos os eventos futuros do array
		*/
	}
	return 0;
}