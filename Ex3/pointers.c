#include <stdlib.h>
#include <stdio.h>



int main()
{
	int a = 25;
	int *pa = &a;
	int b = *pa + a;
	
	printf("%d %d %d %d %d %d\n", a, pa, &a, *pa, b, &b);
	
	/*
	valor contido no endere�o defindo como a;
	endere�o na mem�ria onde a est� localizado
	endere�o na mem�ria onde a est� localizado
	valor contido no endere�o defindo como a;
	soma do valor contido em a com o valor de a = 50;
	endere�o de armazenamento da soma de a+a;
	*/
}

