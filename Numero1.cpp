#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void chile(int valor)
{
	if(valor>=45 && valor<=65)
	{
		printf("\nViva Chile!!!\n");
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int valor, i;
	
	for(i=0;i<30;i++)
	{
		printf("\nDigite um número:\n");
		scanf("%d",&valor);
		
		chile(valor);
	}
}
