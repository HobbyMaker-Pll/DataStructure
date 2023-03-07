#include <stdlib.h>
#include <stdio.h>



int main()
{
	int a = 25;
	int *pa = &a;
	int b = *pa + a;
	
	printf("%d %d %d %d %d %d\n", a, pa, &a, *pa, b, &b);
	
	/*
	valor contido no endereço defindo como a;
	endereço na memória onde a está localizado
	endereço na memória onde a está localizado
	valor contido no endereço defindo como a;
	soma do valor contido em a com o valor de a = 50;
	endereço de armazenamento da soma de a+a;
	*/
}

