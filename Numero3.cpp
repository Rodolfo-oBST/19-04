/*3) Receba do usu�rio 3 n�meros. Fa�a a m�dia e retorne o valor ao usu�rio.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

float media(float a, float b, float c)
{
	float total;
	
	total=(a+b+c)/3;
	
	return total;
	
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, total;
	
	printf("Digite um n�mero:\n");
	scanf("%f",&a);
	
	printf("Digite um n�mero:\n");
	scanf("%f",&b);
	
	printf("Digite um n�mero:\n");
	scanf("%f",&c);
	
	media(a,b,c);
	total = media(a,b,c);
	
	printf("\nA m�dia dos 3 n�meros �:\n%.2f",total);
}
