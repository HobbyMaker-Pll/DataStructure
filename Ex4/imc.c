#include <stdlib.h>
#include <stdio.h>
#include <math.h>


float imc(float mass, float height)
{
	return (mass/pow(height,2));
}

int main()
{
	float m, h, ret;
	
	printf("Insira seu peso: ");
	scanf("%f", &m);
	
	printf("Insira sua altura: ");
	scanf("%f", &h);
	
	ret = imc(m, h);
	
	if (ret < 18.0) printf("Voce esta abaixo do peso");
	else if (imc<=25) printf("Parabens. Voce esta sarado.");
	else if (imc>35) printf("cuidado voce esta obeso");


}
