#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

float delta(float a, float b, float c)
{
	float valor;

	valor = (b*b)-4*(a*c);
	
	return valor;
	
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, vdelta;
	
	printf("Digite o valor de A:\n");
	scanf("%f",&a);
	
	printf("\nDigite o valor de B:\n");
	scanf("%f",&a);

	printf("\nDigite o valor de C:\n");
	scanf("%f",&c);
	
	vdelta = delta(a,b,c);
	
	printf("\nO delta é:\n%.2f",vdelta);
	
}
