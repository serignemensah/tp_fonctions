#include <stdio.h>
#include <math.h>
#include "rectangle.h"

// #define SORTIE 3
#include"triangle.h"

// EXO 1005
int main(void)
{
    int choix;

    do
    {
        printf("Quelle forme? (1:Rectangle, 2:Triangle, 3:Sortir) : ");
        scanf("%d", &choix);

        switch (choix)
        {
        case RECTANGLE:
            Rectangle();
            break;
        case TRIANGLE:
            Triangle();
            break;
        case SORTIE:
            printf("Au revoir");
            break;
        default:
            printf("Choix inconnu");
        }
    }
    while (choix != 3);


    return 0;
}
