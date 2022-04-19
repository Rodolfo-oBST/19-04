/* Dupla: Rodolfo e Henrique Borges
2) Fazer um programa  para receber valores inteiros X, Y e Z do usuário e determinar se estes valores podem formar os lados de um triângulo. 
Em caso afirmativo, informar se o triângulo é equilátero, isósceles ou escaleno. Utilize função.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void tg(float x, float y, float z)
{
	if(x==y && x==z && z==y)
	{
		printf("Equilátero");
	}
	if(x==y && z!=y || z==x && y!=x || y==z && x!=z)
	{
		printf("Isóceles");
	}
	if(x!=y && x!=z && z!=y)
	{
		printf("Escaleno");
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float x, y, z;
	
	printf("Digite o primeiro valor:\n");
	scanf("%f",&x);
	
	printf("Digite o segundo valor:\n");
	scanf("%f",&y);
	
	printf("Digite o terceiro valor:\n");
	scanf("%f",&z);
	
	tg(x,y,z);
}
