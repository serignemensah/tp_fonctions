#include <stdio.H>
#include <math.h>
#include "triangle.h"
int initTriangle()
{
    int cote;
    printf("Coté du triangle ? : ");
    scanf("%d", &cote);
    return cote;
}
float aireTriangle(int cote)
{
    float aire = cote * cote * sqrt(3) / 4;
    return aire;
}
void afficherTriangle(int cote)
{
    for (int i = 0; i < cote; ++i)
    {
        // affichage des spaces
        for (int j = 0; j < cote - i; ++j)
        {
            printf(" ");
        }

        // affichage des etoiles
        for (int j = 0; j <= i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void Triangle(void)
{
    int cote = 0;
    float aire = 0;
    // initialisation du côté
    cote = initTriangle();
    // aire triangle
    aire = aireTriangle(cote);
    printf("L'aire du triangle est : %f \n", aire);
    // affichage triangle
    afficherTriangle(cote);
}
