#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, tam, contador = 0;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	
	int num[tam];
	
	printf("Digite os %d números do Vetor:\n\n", tam);
	for(i = 0; i < tam; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] > 500)
		{
			contador++;
		}
		else
		{
			i = tam;
		}
	}
	for(i = 0; i < contador; i++)
	{
		printf("Valor de num[%d] = %d\n", i, num[i]);
	}
	system("pause");
}
