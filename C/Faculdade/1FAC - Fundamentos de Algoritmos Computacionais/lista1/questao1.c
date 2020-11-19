/*
O custo ao consumidor de um carro novo � a soma do custo de f�brica com a porcentagem do distribuidor e dos impostos
(aplicados ao custo de f�brica). Desenvolver um algoritmo que calcule o custo ao consumidor de determinado carro.
*/

#include <stdio.h>

void main(){
    //Declara��o de vari�veis
	float custo, distr, imposto, preco_final;

	//Obter dados
	printf("Digite o custo do carro\n");
	scanf("%f", &custo);

	printf("Digite a porcentagem do distribuidor\n");
	scanf("%f", &distr);

	printf("Digite a porcentagem do imposto\n");
	scanf("%f", &imposto);

	//Calculando final
	preco_final = custo*(1+(distr+imposto)/100);

	//Exibir resultados
	printf("O preco final e R$%.2f\n", preco_final);
}
