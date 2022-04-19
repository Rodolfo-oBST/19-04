/*3) Receba do usuário 3 números. Faça a média e retorne o valor ao usuário.*/
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
	
	printf("Digite um número:\n");
	scanf("%f",&a);
	
	printf("Digite um número:\n");
	scanf("%f",&b);
	
	printf("Digite um número:\n");
	scanf("%f",&c);
	
	media(a,b,c);
	total = media(a,b,c);
	
	printf("\nA média dos 3 números é:\n%.2f",total);
}
