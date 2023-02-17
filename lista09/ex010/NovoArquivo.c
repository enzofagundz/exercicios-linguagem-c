#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i, n = 0, aprovados=0, exame=0, reprovados=0;
	float notas[2], soma = 0, media;

	for(i = 0; i < 6; i++)
	{
		printf("Digite as duas notas do %d° aluno:\n", i);
		for(n = 0; n < 2; n++)
		{
			scanf("%f", &notas[n]);
			soma = soma + notas[n];
			media = media + notas[n];
		}
		printf("A média das notas do aluno é: %0.2f\n", soma / 2);
		if(soma / 2 <= 3)
		{
			printf("Reprovado\n\n");
			reprovados = reprovados + 1;
		}
		if(soma / 2 > 3 && soma / 2 <= 6.9)
		{
			printf("Exame\n\n");
			exame = exame + 1;
		}
		if(soma / 2 >= 7 && soma / 2 <= 10)
		{
			printf("Aprovado\n\n");
			aprovados = aprovados + 1;
		}
		soma = 0;
	}
	system("CLS");
	printf("\nA média da sala é: %0.2f", media/12);
	printf("\n%d alunos foram aprovados, %d alunos estão de exame e %d alunos foram reprovados\n\n", aprovados, exame, reprovados);
	
	system("PAUSE");
	return 0;
}
