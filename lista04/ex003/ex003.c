#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float total;
	int e, vb, vn, vv;
	
	printf("Digite o n�mero de eleitores do munic�pio: ");
	scanf("%d", &e);
	printf("Digite o n�mero de votos em branco: ");
	scanf("%d", &vb);
	printf("Digite o n�mero de votos nulos: ");
	scanf("%d", &vn);
	printf("Digite o n�mero de votos v�lidos ");
	scanf("%d", &vv);
	
	total = (vb * 100) / e;
	printf("\n\n%0.2f%% dos eleitores votaram em branco\n", total);
	total = (vn * 100) / e;
	printf("%0.2f%% dos eleitores votaram nulo\n", total);
	total = (vv * 100) / e;
	printf("%0.2f%% dos votos foram v�lidos\n\n", total);
	
	system("pause");
	return 0;
}