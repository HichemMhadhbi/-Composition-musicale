#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char morceau[500], resultat[500];
    int index = 0;

    printf("Veuillez saisir la morceau de musique : ");
    scanf("%s", morceau);

    for(int i = 0 ; i < strlen(morceau) ; i++){
        if (index == 0 || morceau[i] != resultat[index - 1]){
            resultat[index] = morceau[i];
            index++;
        }
        else{
            index--;
        }
    }

    resultat[index] = '\0';

    printf("Le morceau corrige est : %s\n", resultat);
    return 0;
}
