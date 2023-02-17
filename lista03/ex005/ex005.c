#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade < 5)
		printf("Você não possui idade suficiente\n\n");
	if (idade >= 5 && idade <= 7)
		printf("Categoria Infantil A\n\n");
	if (idade >= 8 && idade <= 10)
		printf("Categoria Infantil B\n\n");
	if (idade >= 11 && idade <= 13)
		printf("Categoria Juvenil A\n\n");
	if (idade >= 14 && idade <= 17)
		printf("Categoria Juvenil B\n\n");
	if (idade >= 18)
		printf("Categoria Adulto\n\n");
	
	system("pause");
	return("0");
}