/*
Construir um algoritmo que calcule o peso ideal de uma pessoa, de acordo com o seu sexo e altura, utilizando as seguintes f�rmulas: 
para homens: (72.7*h)-58 
para mulheres: (62.1*h)-44.7
*/

#include <stdio.h>

void main(){
	//obtendo os dados necess�rios
	char genero;
	float h, htotal;
	printf("Qual o  genero que deseja calcular?\n Use F para feminino e M para masculino! \n");
	scanf("%c", &genero);
	printf("Qual a altura da pessoa? (em m)\n");
	scanf("%f", &h);
	
	//hora de fazer os testes e calculos
	if (genero == 'F' || 'f'){
		htotal = (62.1*h)-44.7;
		printf("O peso ideal para o genero feminino e altura e de %.2fKg", htotal);
	} else{
		htotal = (72.7*h)-58 ;
		printf("O peso ideal para o genero masculino e altura e de %.2fKg", htotal);
	}
	
	/*
	tbm pode fazer com switch case
	al�m disso, tbm � poss�vel acrescentar um "else if" e testar de o usu�rio digitou
	realmente M ou m, para o caso de terem digitado uma letra qualquer n�o relacionada.
	*/
}
