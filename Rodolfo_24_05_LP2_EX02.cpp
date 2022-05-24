#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char vogal;
	
	printf("Digite: \nS ou s para solteiro; \nC ou c para casado; \nD ou d para divorciado; \nV ou v para viuvo.\n\n");
	scanf("%c", &vogal);
	
	switch(vogal)
	{
		case 's':
		case 'S':
			printf("\nSolteiro");
			break;
		
		case 'c':
		case 'C':
			printf("\nCasado");
			break;               
		
		case 'd':
		case 'D':
			printf("\nDivorciado");
			break;
		
		case 'v':
		case 'V':
			printf("\nViúvo");
			break;
		default:
			printf("\nEstado inválido");
	}
}	
