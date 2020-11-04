#include <stdio.h>
#include <stdbool.h>

int main() {
    int capacite;
    int usage_percent;
    float l_per_kn;

    printf("Saisire la capacité du moteur : ");
    while(scanf("%d", &capacite)==0 || capacite <=0){
        printf("La capacite doit etre superieur a 0");
        scanf("%*s");
    }

    printf("Pourcentage jauge : ");
    while (scanf("%d", &usage_percent)==0 ||usage_percent <=0) {
        printf("la jauge doit etre un chiffre positif");
        scanf("%*s");
    }


    printf("Essence au KM ");
    while (scanf("%f", &l_per_kn)==0 ||l_per_kn <=0.) {
        printf("Essence par km doit etre un chiffre positif");
        scanf("%*s");
    }


    float cap = (float) capacite * ((float) usage_percent / 100);
    if (cap * l_per_kn> 350){
       printf("foncez");
   } else {
       printf("Reprennez de l'essence");
   }




    return 0;


}
