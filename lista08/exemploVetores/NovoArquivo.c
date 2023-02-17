#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main(){
	setlocale(LC_ALL ,"Portuguese");
	
	int i, n=10;
	int num[n];
	srand(time(NULL));
	
	printf("Digite 5 números para o Vetor\n");
	
	for(i=0; i < n; i++){
		
		//scanf("%d", &num[i]);
		num[i] = rand() % 100;
	}
	for(i=0; i<n; i++){
		printf("Valor de num[%d] = %d\n", i, num[i]);
	}
	
	system("Pause");
}