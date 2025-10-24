#include <stdio.h>

#define RECUPERER 0
#define CONSULTER 1
#define RETIRER 2
#define AJOUTER 3

void consulterSolde(float solde)
{
    printf("Votre solde est de : %f\n", solde);
}

void retirerArgent(float* x)
{
    float somme;
    printf("Somme à retirer ?");
    scanf("%f", &somme);
    // modification du solde
    *x -= somme;
    // affichage du solde
    consulterSolde(*x);
}

void ajouterArgent(float* x)
{
    float somme;
    printf("Somme à déposer ?");
    scanf("%f", &somme);
    // modification du solde
    *x += somme;
    // affichage du solde
    consulterSolde(*x);
}

int main(void)
{
    float solde = 100.0f;
    int choix;
    do
    {
        printf("Distributeur ECE :\n");
        printf("1: Consulter solde \n");
        printf("2: Retirer\n");
        printf("3: Deposer\n");
        printf("0: Recuperer carte \n");
        printf("Votre choix ? : \n");
        scanf("%d", &choix);

        switch (choix)
        {
        case CONSULTER: // consulter solde
            consulterSolde(solde);
            break;
        case RETIRER:
            retirerArgent(&solde);
            break;
        case AJOUTER:
            ajouterArgent(&solde);
            break;
        case RECUPERER:
            printf("N'oubliez pas votre carte \n");
            break;
        default:
            printf("Choix inconnu\n");
            break;
        }
    }
    while (choix);
    return 0;
}
