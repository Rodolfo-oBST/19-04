#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int a[15], multiplo[15], i, j=0;
	
	for(i=0;i<15;i++)
	{
		printf("Digite um valor:\n");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<15;i++)
	{
		if(a[i]%7==0)
		{
			multiplo[j]=a[i];
			j++;
		}
	}
	printf("Valores multiplos de 7:\n");
	for(i=0;i<j;i++)
	{
		printf("%d\n",multiplo[i]);
	}
}
