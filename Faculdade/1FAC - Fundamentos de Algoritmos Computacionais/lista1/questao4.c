/*
Um banco conceder� um cr�dito especial aos seus clientes, vari�vel com o saldo m�dio no �ltimo ano. 
Fa�a um algoritmo que calcule o valor do cr�dito de acordo com a tabela abaixo.
Saldo M�dio                      Percentual 
Inferior a R$ 1000,00            nenhum cr�dito
De R$ 1000,00 a R$ 1499,99       20% do saldo m�dio
De R$ 1500,00 a R$ 2499,99       30% do saldo m�dio
R$ 2500,00 ou mais               40% do saldo m�dio
*/

#include <stdio.h>

void main(){
	float salario, credito;
	printf("Qual o seu salario atual? R$");
	scanf("%f", &salario);
	if (salario >= 2500){
		credito = (40 * salario)/100;
		printf("O credito especial disponivel para voce e se R$%.2f!\n", credito);
	} else if (salario >= 1500){
		credito = (30 * salario)/100;
		printf("O credito especial disponivel para voce e se R$%.2f!\n", credito);
	} else if (salario >= 1000){
		credito = (20 * salario)/100;
		printf("O credito especial disponivel para voce e se R$%.2f!\n", credito);
	} else{
		printf("Infelizmente nao ha credito disponivel para voce no momento");
	}
}
