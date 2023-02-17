#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int	i = 0;
	float altura1, peso1, altura2, peso2;
	char nome1[10], nome2[10];

	printf("Digite um nome, altura e peso:\n");
	gets(nome1);
	scanf("%f%f", &altura1, &peso1);
	
	printf("Digite um nome, altura e peso:\n");
	gets(nome2);
	scanf("%f%f", &altura2, &peso2);
	
	if(altura1 > altura2)
	{
		printf("%s é mais pesado!", nome1);
	}
	else
	{
		printf("%s é mais pesado!", nome2);
	}


	printf("%s você tem %0.2f m e %0.2f quilos", nome1, altura1, peso1);




	return 0;
}
