/* 3) Receba um vetor de 20 posi��es e verifique quantas vezes aparecem os n�meros 10 e 20. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int vetor[20], v10[20], v20[20], i, j=0, k=0;
	
	for(i=0;i<20;i++)
	{
		printf("Digite um valor:\n");
		scanf("%d",&vetor[i]);
	}
	
	for(i=0;i<20;i++)
	{
		if(vetor[i]==10)
		{
			v10[j]=vetor[i];
			j++;
		}
		if(vetor[i]==20)
		{
			v20[k]=vetor[i];
			k++;
		}
	}
	printf("\nQuantidade de n�meros 10:\n");
	printf("%d\n",j);
	
	printf("\nQuantidade de n�meros 20:\n");
	printf("%d\n",k);
}
