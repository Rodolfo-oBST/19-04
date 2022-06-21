#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
	char palavra [22], lacuna [22]="-", letra [22], erros [22], tam;
	int vida = 6, retornaVidas, pontos=0, i, i2=0;
	
	printf("Tema: utensilios da cozinha\n\n");
	printf("Digite a palavra a ser adivinhada: \n");
	gets(palavra);
	
	for (i=0; i<strlen(palavra); i++){
		lacuna[i]='-';
	    tam=strlen(palavra);
	}
	    
	while (vida > 0)
	{
	    retornaVidas = 0;
	    	
	    printf ("\n%s\n",lacuna);
	    printf("Digite uma letra\n");
	    gets(letra);	
	    	
	    	for (i =0; i <strlen(palavra); i++)
			{
	    		if (letra[0]==palavra[i])
	    		{
	    			lacuna[i] = palavra[i];
	    			retornaVidas++;
	    			pontos++;		
				}
			}
			if(retornaVidas == 0)
			{
			  vida--;
			  
				if (vida == 0)
				{
					printf ("\n\tVoce perdeu.\n");
			 		printf ("\n\tA palavra certa era %s\n",palavra);
				}
		    	else
		    	{
					printf ("\n\nVoce errou uma letra. Restam %d vidas\n",vida);
					erros[i2] = letra[0];
					i2++;
	    		}
			}
			else
		    {
			   if (pontos == tam)
			   {
			    	printf ("\nVoce acertou a palavra\n");
			    	break;
			   }
	  		  	else
				{
					printf ("Voce acertou uma das letra.\n");	
				}
	   		}
	}
}
