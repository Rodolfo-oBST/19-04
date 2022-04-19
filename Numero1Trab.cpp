/* 
Dupla: Rodolfo e Henrique Borges
1) Fazer uma função que recebe um mês e um ano como parâmetros e retorna o número de dias daquele mês daquele ano. 
Dica: um ano é bissexto quando é múltiplo de 4 e não múltiplo de 100, ou também quando é múltiplo de 400.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int diasMP, diasIP, fev;

int dias(int mes, int ano)
{
	if(ano%400==0 || ano%100!=0 || ano%4==0)
	{
		if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
		{
			diasMP=31;
			return diasMP;
		}
		if(mes==4 || mes==6  || mes==9  || mes==11)
		{
			diasIP=30;
			return diasIP;
		}
		if(mes==2)
		{
			fev=29;
			return fev;
		}
	}
	else
	{
		if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
		{
			diasMP=31;
			return diasMP;
		}
		if(mes==4 || mes==6  || mes==9  || mes==11)
		{
			diasIP=30;
			return diasIP;
		}
		if(mes==2)
		{
			fev=28;
			return fev;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int mes, ano;
	
	printf("Digite o mês:\n");
	scanf("%d",&mes);
	
	printf("Digite o ano:\n");
	scanf("%d",&ano);
	
	dias(mes,ano);
	diasMP = dias(mes,ano);
	
	printf("Dias do mês do ano de %d:",ano);
	printf("\n%d",diasMP);
	
}
