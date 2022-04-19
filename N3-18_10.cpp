/*Receber um vetor de 10 posições. Transfere os valores para um segundo vetor em ordem contraria ao recebimento.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a[10], b[10], i, j=9;
	
	for(i=0;i<10;i++)
	{
		printf("Digite um valor:\n");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		b[j]=a[i];
		j++;
	}
	
	
}
