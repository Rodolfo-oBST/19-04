/*Dupla: Rodolfo e Henrique Borges
3) Fazer um programa para receber um n�mero inteiro do usu�rio e determinar se este n�mero � primo ou n�o.
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
		printf("N�o � primo");
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("Digite um n�mero:\n");
	scanf("%d",&n);
	
	primo(n);
}
