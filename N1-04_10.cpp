#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int comp1, comp2, comp3, comp4, comp5;
	char vogal[2];
	
	printf("Digite uma vogal:\n");
	gets(vogal);
	
	comp1=strcmp(vogal,"A");
	comp2=strcmp(vogal,"E");
	comp3=strcmp(vogal,"I");
	comp4=strcmp(vogal,"O");
	comp5=strcmp(vogal,"U");
	
	if(comp1==0)
	{
		printf("\nPalavra que começa com a vogal A: \nAjuda");
	}
	if(comp2==0)
	{
		printf("\nPalavra que começa com a vogal E: \nEstrada");
	}
	if(comp3==0)
	{
		printf("\nPalavra que começa com a vogal I: \nIgreja");
	}
	if(comp4==0)
	{
		printf("\nPalavra que começa com a vogal O: \nOntem");
	}
	if(comp5==0)
	{
		printf("\nPalavra que começa com a vogal U: \n Urubu");
	}
	if(comp1!=0 && comp2!=0 && comp3!=0 && comp4!=0 && comp5!=0)
	{
		printf("\nVogal não identificada, tente escrevê-la maiúscula.");
	}
}
