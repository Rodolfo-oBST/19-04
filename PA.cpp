#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int razao, termo1, termo2, PtermoX, valorX, s;
	
	printf("F�rmula geral: aX = a1+(n-1)*r\n\n");
	
	printf("Digite o primeiro termo:\n");
	scanf("%d",&termo1);
	
	printf("Digite o segundo termo:\n");
	scanf("%d",&termo2);
	
	razao=termo2-termo1;
	
	printf("Razao dessa PA:\n%d",razao);
	
	printf("\n\n------------------------------------------------------------------------------------------\n\n");
	
	printf("Caso deseje saber qual o termo de uma certa posi��o digite 1;\n");
	printf("Caso deseje saber a posi��o de algum termo digite 2;\n\n");
	scanf("%d",&s);

	printf("\n\n------------------------------------------------------------------------------------------\n\n");
	
	if(s==1)
	{
		printf("\n\nDigite a posi��o do termo desejado:\n");
		scanf("%d",&PtermoX);
	
		valorX=(termo1)+((PtermoX-1)*razao);
	
		printf("Valor do termo desejado de acordo com sua posi��o:\n%d",valorX);
	}
}
