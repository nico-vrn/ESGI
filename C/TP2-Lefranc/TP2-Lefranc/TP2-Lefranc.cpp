#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include "TP2-Lefranc.h"

//fonction qui demande 3 chiffre A B et C et résoud cette équation : Ax2 + Bx + C = 0
void equation()
{
    float a, b, c, delta, x1, x2;
    printf("Resoudre l’equation du second degre : Ax2 + Bx + C = 0 \n");
    printf("Entrez A :");
    scanf("%f", &a);
    printf("Entrez B :");
    scanf("%f", &b);
    printf("Entrez C :");
    scanf("%f", &c);
    delta = b*b - 4*a*c;
    if (delta < 0)
    {
        printf("Pas de solution dans R");
    }
    else if (delta == 0)
    {
        x1 = -b/(2*a);
        printf("x = %f", x1);
    }
    else
    {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("l'équation admet 2 solutions qui sont : \n -x1 = %f \n -x2 = %f", x1, x2);
    }
}

//fonction qui calcul la suite défini par u0=2 un+1=1/2(un+2/un) qui demande N puis affiche toutes les dixaine jusqu'a N, le résultat de U[N] et ce vers quoi la suite tant que N est positif
void suite()
{
    int n, i;
    float u0, un, un1;
    printf("Calcul de la suite definie par u0=2 un+1=1/2(un+2/un) \n");
    printf("Entrez N :");
    scanf("%d", &n);
    u0 = 2;
    un = u0;
    for (i = 0; i < n; i++)
    {
        un1 = (un+2)/un;
        un = un1;
        if (i%10 == 0)
        {
            printf("u[%d] = %f \n", i, un);
        }
    }
    printf("u[%d] = %f \n", n, un);
    if (un > 0)
    {
        printf("La suite tend vers l'infini");
    }
    else if (un < 0)
    {
        printf("La suite tend vers -l'infini");
    }
    else
    {
        printf("La suite tend vers 0");
    }
}


int main()
{
	int choix;
	do
	{
		printf("\n \n Choississez votre Fonction a utiliser \n");
		printf("1. equation \n");
		printf("2. Suite \n");
		printf("3.  \n");
		printf("4.  \n");
		printf("5.  \n");
		printf("6.  \n");
		printf("7.  \n");
		printf("8. Quitter \n");
		printf("Entrer votre choix : ");
		scanf("%d", &choix);
		switch (choix)
		{
		case 1:
			equation();
			break;
		case 2:
			suite();
			break;
		case 3:
			
			break;
		case 4:
			
			break;
		case 5:
			
			break;
		case 6:

			break;
		case 7:
			
			break;
		case 8:
			printf("Au revoir \n");
			break;
		default:
			printf("Choix invalide");
			break;
		}
	} while (choix != 8);
	return 0;
}

