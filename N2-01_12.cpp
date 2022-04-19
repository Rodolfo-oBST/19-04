#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

float opmat1(float a, float b)
{
	float total1;
	
	total1 = a+b;	
	return total1;
}
float opmat2(float a, float b)
{
	float total2;
	
	total2 = a-b;	
	return total2;
}
float opmat3(float a, float b)
{
	float total3;
	
	total3 = a*b;	
	return total3;
}
float opmat4(float a, float b)
{
	float total4;
	
	total4 = a/b;	
	return total4;
}
float opmat5(float a, float b, float c)
{
	float total5;
	
	total5 = (b*b) - 4*(a*c);	
	return total5;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, soma, sub, mult, div, delta;
	int cod=0;
	
	printf("Digite o número de acordo com a operaçõa matemática desejada:\n 1 - Somar \n 2 - Subtrair \n 3 - Multiplicar \n 4 - Dividir \n 5 - Delta \n");
	scanf("%d",&cod);
	
	printf("\n----------------------------------------------------------------------------------\n");
	
	if(cod==1)
	{
		printf("\nDigite um valor:\n");
		scanf("%f",&a);
		printf("\nDigite um valor:\n");
		scanf("%f",&b);
		
		soma = opmat1(a,b);
		
		printf("\nValor da soma:\n%.2f",soma);
	}
	if(cod==2)
	{
		printf("\nDigite um valor:\n");
		scanf("%f",&a);
		printf("\nDigite um valor:\n");
		scanf("%f",&b);
		
		sub = opmat2(a,b);
		
		printf("\nValor da subtração:\n%.2f",sub);
	}
	if(cod==3)
	{
		printf("\nDigite um valor:\n");
		scanf("%f",&a);
		printf("\nDigite um valor:\n");
		scanf("%f",&b);
		
		mult = opmat3(a,b);
		
		printf("\nValor da multiplicação:\n%.2f",mult);
	}
	if(cod==4)
	{
		printf("\nDigite um valor:\n");
		scanf("%f",&a);
		printf("\nDigite um valor:\n");
		scanf("%f",&b);
		
		div = opmat4(a,b);
		
		printf("\nValor da divisão:\n%.2f",div);
	}
	if(cod==5)
	{
		printf("\nDigite um valor:\n");
		scanf("%f",&a);
		printf("\nDigite um valor:\n");
		scanf("%f",&b);
		printf("\nDigite um valor:\n");
		scanf("%f",&c);
		
		delta = opmat5(a,b,c);
		
		printf("\nValor de delta:\n%.2f",delta);
	}
	
	
}
