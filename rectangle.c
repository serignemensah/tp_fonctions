#include <stdio.h>
#include "rectangle.h"
void afficherRectangle(int hauteur, int largeur)
{
    for (int i = 0; i < hauteur; ++i)
    {
        for (int j = 0; j < largeur; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
}
void initRectangle(int* phauteur, int* plargeur)
{
    printf("Donnez l'hauteur et la largeur du rectangle : ");
    scanf("%d %d", phauteur, plargeur);
};
int aireRectangle(int hauteur, int largeur)
{
    return hauteur * largeur;
}
void Rectangle(void)
{
    int hauteur;
    int largeur;
    int aire;
    // initialiser hauteur et largeur
    initRectangle(&hauteur, &largeur);
    // calcul aire
    aire = aireRectangle(hauteur, largeur);
    printf("L'aire du rectangle est : %d \n", aire);
    // afficher rectangle
    afficherRectangle(hauteur, largeur);
}
