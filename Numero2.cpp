/* 2) Faça um programa que receba a idade 8 pessoas. Calcule e mostre: A quantidade de pessoas com idade abaixo de 28 anos; */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int idadeV(int idade)
{
	int mn=0, x;
	
	if(idade<28)
	{
		idade=mn;
		for(x=0;x<8;x++)
		{
			mn++;
			return mn;
		}
	}


}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade, V28, i;
	
	for(i=0;i<8;i++)
	{
		printf("Digite sua idade:\n");
		scanf("%d",&idade);
	}		

	V28 = idadeV(idade);
	printf("Pessoas com menos de 28 anos:\n%d",V28);
}
