#include<stdio.h>//Uso da função printf e scanf

main()//Funcao principal em C
{
    int n1, n2, m;//Declare N1, N2, e M numerico
    printf("Digite o primeiro numero");//ESCREVA
    scanf("%d", &n1);//LEIA
    printf("Digite o segundo numero");
    scanf("%d", &n2);
    m = n1 * n2;
    printf("O resultado da multiplicacao: %d", m);
}//FIM ALGORITMO
