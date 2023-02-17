#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

	float p, h, r;
	printf("Digite seu peso: \n");
	scanf("%f", &p);
	printf("Digite a sua altura: \n");
	scanf("%f", &h);

	r = p / (h * h);

	printf("Seu IMC é igual a %0.1f\n", r);
	
	if (r <= 18.5)
		printf("\nAbaixo do peso ideal\n\n");
	if (r > 18.5 && r < 24.9 )
		printf("\nPeso normal\n\n");
	if (r >= 25 && r < 29.9 )
		printf("\nAcima do peso\n\n");
	if (r >= 30 && r < 34.9 )
		printf("\nObesidade grau I\n\n");
	if (r >= 35 && r < 39.9 )
		printf("\nObesidade grau II\n\n");
	if (r <= 40 )
		printf("\nObesidade grau III\n\n");
	
	
	
	system("pause");
	return("0");
}
