#include <stdio.h>

void main(){
    float n1, n2, valor;
    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite outro numero: ");
    scanf("%f", &n2);
    printf("\n");
    printf("O sucessor de %.1f é %.1f e o antecessor é %.1f\n", n1, n1 + 1, n1 - 1);
    printf("Seu dobro é %.1f, seu triplo é %.1f e sua raiz quadrada é %.1f\n", n1 * 2, n1 * 3, n1 * n1);
    printf("A media entre os dois numeros e %.1f\n", (n1+n2)/2);
    printf("\n");
    printf("%.2fm equivale a %.2fcm e a %.2fmm\n", n1, n1 * 100, n1 * 1000);
    printf("\nA área total e %.2fm² e sao necessarios %.2fl de tinta para pintar tudo", n1 * n2,(n1 * n2)/2);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Digite o valor: ");
    scanf("%f", &valor);
    printf("Com esse valor, pode comprar US$%d", (int)valor/3.27);
    printf("\nO preco com desconto e %.2f\n", valor - ((valor * 5)/100));
    printf("O salario com o aumento fica %.2f", valor + ((valor * 15)/100));


}
