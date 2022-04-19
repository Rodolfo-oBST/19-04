/* 2) Escreva um algoritmo que leia 15 valores para um vetor de 15 posições. Mostre depois somente os pares. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int vetor[15], par[15], i, j=0;
	
	for(i=0;i<10;i++)
	{
		printf("Digite um valor:\n");
		scanf("%d",&vetor[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(vetor[i]%2==0)
		{
			par[j]=vetor[i];
			j++;
		}
	}
	printf("\nValores pares:\n");
	for(i=0;i<j;i++)
	{
		printf("%d\n",par[i]);
	}
}
