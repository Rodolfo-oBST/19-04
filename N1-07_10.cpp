#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int valores[3];
	
	printf("Digite um valor:\n");
	scanf("%d",&valores[1]);
	
	printf("Digite um valor:\n");
	scanf("%d",&valores[2]);
	
	printf("Digite um valor:\n");
	scanf("%d",&valores[3]);
	
	valores[0]=valores[1]*valores[2]*valores[3];
	
	printf("\nO produto desses 3 valores é: %d",valores[0]);
}
