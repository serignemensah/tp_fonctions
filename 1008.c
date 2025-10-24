#include <stdio.h>

float tauxEngagement(int nbLikes, int nbCommentaires, int nbAbonnes ){
    float taux = (float)(nbLikes + nbCommentaires)/(float)nbAbonnes *100;
    return (taux>100) ? 100: taux;
}

void performance(float const taux){
    if(taux < 1){
        printf("Taux d'engagement %.2f %% faible", taux);
    } else if (taux < 10){
        printf("Taux d'engagement %.2f %% moyen", taux);
    } else{
        printf("Taux d'engagement %.2f %% élevé", taux);
    }
}

int main(void) {
    int nbLikes ;
    int nbCommentaires;
    int nbAbonnes ;
    float taux;

    printf("Rentrez votre nombre d'abonnés: ");
    scanf("%d", &nbAbonnes);
    printf("Rentrez votre nombre de likes: ");
    scanf("%d", &nbLikes);
    printf("Rentrez votre nombre de comentaires : ");
    scanf("%d", &nbCommentaires);

    //procedure
    taux = tauxEngagement(nbLikes, nbCommentaires, nbAbonnes );

    printf("\n ----------------\n");
    printf("Nombre d'abonnés : %d \n", nbAbonnes);
    printf("Nombre de likes : %d\n", nbLikes);
    printf("Nombre de commentaires : %d\n", nbCommentaires);
    performance(taux);


    return 0;
}
