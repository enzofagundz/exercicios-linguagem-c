#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, a;
	
	for(i = 1; i <= 5; i++){
		printf("Digite o %dº número: \n", i);
		scanf("%d", &a);
		printf("%d x 2 = %d\n", a, a*2);
	}
	
	
	system("pause");
	return(0);
}