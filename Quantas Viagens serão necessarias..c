/* 
Bacharelado em Ciências da Computação
IFSULDEMINAS
Algoritmos I - Prof. Hiran
Lista de Exercícios 03 - Desafios

Nome do Estudante: Kevin Augusto Reis de Camargo
Exercício: Desafio 02
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a, b, c;
	printf("Digite o comprimento de uma das caixas:");
	scanf("%i", &a);
	printf("\nDigite o comprimento de uma das caixas:");
	scanf("%i", &b);
	printf("\nDigite o comprimento de uma das caixas:");
	scanf("%i", &c);
	
	if(a<b && b<c){
		printf("Sera necessario fazer uma viagem\n");
	}else if(a==b && a==c){
		printf("Sera necessario tres viagens\n");
	}else if(a<b && b==c){
		printf("sera necessario fazer duas viagens\n");
	}else if(a==b){
		if((a+b)<c){
			printf("sera necessario fazer uma viagem\n");
		}else{
			printf("sera necessario fazer duas viagens\n");
		}
	}
	system("pause");
	return 0;
	
}
