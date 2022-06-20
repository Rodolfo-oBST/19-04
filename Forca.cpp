#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	printf("Tema: Cidades do Triângulo Mineiro\n\n\n");
	char palavra[22], letra[10], a;
	int comp, i ;
	
	printf("Digite uma palavra dentro do tema:\n", palavra );
	gets(palavra);
	
	
	
	for(i=0;i<10;i++)
	{
		printf("Letra:\n");
		gets(letra);
		
		comp=strcmp(letra, palavra);
	}
	if(comp==0)
		{
			printf("Letra está na palavra\n");
		}
	
	
}
