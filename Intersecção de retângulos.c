/* 
Bacharelado em Ciências da Computação
IFSULDEMINAS
Algoritmos I - Prof. Hiran
Lista de Exercícios 03 - Desafios

Nome do Estudante: Kevin Augusto Reis de Camargo
Exercício: Desafio 01
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	int x01, x11, y01, y11;
	int x02, x12, y02, y12;
	printf ("Digite as cordenadas na seguinte ordem: x0 y0 x1 y1:" );
	scanf( "%i %i %i %i", &x01, &y01, &x11, &y11);
	printf ("Digite as cordenadas na seguinte ordem: x0 y0 x1 y1:" );
	scanf( "%i %i %i %i", &x02, &y02, &x12, &y12);
	if(x01>x12 && y01>y12){
		printf("0");
	}else if( x02>x11 && y02>y11){
		printf("0\n");
	}else{
		printf("1\n");
	}
	system("pause");
	return 0;
}
