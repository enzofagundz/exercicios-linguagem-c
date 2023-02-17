#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float total;
	int e, vb, vn, vv;
	
	printf("Digite o número de eleitores do município: ");
	scanf("%d", &e);
	printf("Digite o número de votos em branco: ");
	scanf("%d", &vb);
	printf("Digite o número de votos nulos: ");
	scanf("%d", &vn);
	printf("Digite o número de votos válidos ");
	scanf("%d", &vv);
	
	total = (vb * 100) / e;
	printf("\n\n%0.2f%% dos eleitores votaram em branco\n", total);
	total = (vn * 100) / e;
	printf("%0.2f%% dos eleitores votaram nulo\n", total);
	total = (vv * 100) / e;
	printf("%0.2f%% dos votos foram válidos\n\n", total);
	
	system("pause");
	return 0;
}