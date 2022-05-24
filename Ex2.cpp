#include<stdio.h>
#include<stdlib.h>

int main()
{
	int mes;
	
	printf("Digite o numero do mes:\n");
	scanf("%d",&mes);
	
	switch (mes)
	{
		case 1:
		    printf("\nMes de Janeiro\n");
		    break; 
		case 2:
			printf("\nMes de Fevereiro\n");
			break;
		case 3:
			printf("\nMes de Março\n");
			break;
		case 4:
			printf("\nMes de Abril\n");
			break;
		case 5:
			printf("\nMes de Maio\n");
			break;
		case 6:
			printf("\nMes de Junho\n");
			break;
		case 7:
			printf("\nMes de Julho\n");
			break;
		case 8:
			printf("\nMes de Agosto\n");
			break;
		case 9:
			printf("Mes de Setembro\n");
			break;
		case 10:
			printf("\nMes de Outubro\n");
			break;
		case 11:
			printf("\nMes de Novembro\n");
			break;
		case 12:
			printf("\nMes de Dezembro\n");
			break;
		default:
		      printf("\nMes nao identificado\n");
	}
}

