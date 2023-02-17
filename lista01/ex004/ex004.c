#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

	float n1, n2, m;
	printf("Digite a primeira nota ");
	scanf("%f", &n1);
	printf("Digite a segunda nota ");
	scanf("%f", &n2);
	
	if (n1 < 0 | n2 < 0 | n1 > 10 | n2 > 10)
		printf("Notas inválidas\n\n");
	else
		m = (n1 + n2) / 2;
	printf("A média é igual a: %0.2f\n\n", m);

	if (m >= 6)
		printf("O aluno foi aprovado!\n\n");
	else
		printf("O aluno foi reprovado!\n\n");
	
	system("pause");
	return(0);
}
