#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num=1;
	
	while(num <= 100){
		printf("%d\n", num);
		_sleep(50);
		num = num + 2;
	}
	
	system("PAUSE");
	return (0);
}