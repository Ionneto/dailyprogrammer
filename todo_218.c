#include <stdio.h>
#include <stdlib.h>

void adiciona(char **evento){
	printf("%s\n", evento);
}

void deleta(int evento){
	printf("%d\n", evento);
}

void imprime(){}

int main() {
	int option;
	int numb;
	char *aux;
	while(1){
		//pede entrada, opções 1, 2, 3 + tratamento
		printf("Escolha uma opção:\n 1) Adicionar \n 2) Apagar \n 3) Ver\n");
		scanf("%d", &option );
		printf("%d\n", option );
		
		if(option == 1) {
			printf("Insira a tarefa a adicionar\n");
			scanf("%s", &aux);
			adiciona(&aux);
		} else

		if(option == 2 ){
			printf("Qual evento deseja deletar(Insira o número)\n");
			scanf("%d", &numb);
			deleta(numb);
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