/*Dupla: Rodolfo e Henrique Borges
3) Fazer um programa para receber um número inteiro do usuário e determinar se este número é primo ou não.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int primo(int n)
{
	int i, p;

	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			p++;
			break;
		}
	}
	if(p==0)
	{
		printf("Primo");
	}
	else
	{
		printf("Não é primo");
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("Digite um número:\n");
	scanf("%d",&n);
	
	primo(n);
}
