#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int comp1, comp2, comp3, comp4, comp5;
	char vogal[2];
	
	printf("Digite: \nS ou s para solteiro; \nC ou c para casado; \nD ou d para divorciado; \nV ou v para viuvo.\n\n");
	gets(vogal);
	
	comp1=strcmp(vogal,"S");
	comp1=strcmp(vogal,"s");	
	
	comp2=strcmp(vogal,"C");
	comp2=strcmp(vogal,"c");
	
	comp3=strcmp(vogal,"D");
	comp3=strcmp(vogal,"d");

	comp4=strcmp(vogal,"V");
	comp4=strcmp(vogal,"v");
	
	if(comp1==0)
	{
		printf("\nSolteiro");
 }
	if(comp2==0)
	{
		printf("\nCasado");                  
	}
	if(comp3==0)
	{
		printf("\nDivorciado");
	}
	if(comp4==0)
	{
		printf("\nViuvo");
	}
	if(comp1!=0 && comp2!=0 && comp3!=0 && comp4!=0)
	{
		printf("\nEstado civil invalido");
	}
}
