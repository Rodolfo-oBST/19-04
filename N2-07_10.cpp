#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int val[15], i;
	
	for(i=0;i<15;i++)
	{
		printf("\nDigite um valor:");
		scanf("%d",&val[i]);
		printf("\n-----------------------------\n");
	}
}
