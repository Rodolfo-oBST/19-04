/* 1) Crie um programa capaz de receber duas palavras do usu�rio e informar qual palavra � a maior. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int p1, p2;
	char palavra1[50], palavra2[50];
	
	printf("\nDigite uma palavra:\n");
	gets(palavra1);
	
	printf("\nDigite outra palavra:\n");
	gets(palavra2);
	
	p1=strlen(palavra1);
	p2=strlen(palavra2);
	
	if(p1>p2)
	{
		printf("\nPalavra 1 � maior que a palavra 2");
	}
	else
	{
		printf("\nPalavra 2 � maior que a palavra 1");
	}
	
}
