#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int verifica=1;
	char palavra[30];
	printf("Digite uma palavras\n");
	gets(palavra);
	verifica=strlen(palavra);
	printf("%d\n",verifica);
	system("pause");
	return 0;
}
