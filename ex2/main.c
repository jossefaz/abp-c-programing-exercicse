#include <stdio.h>

int main() {
    char lettre;
    char clean_up;
    char lettre_convertie;
    printf("Ecrivez une lettre \n");
    while(scanf("%c",&lettre)==0 || (((int)lettre <65 || (int)lettre >90) && ((int)lettre <97 || (int)lettre > 122))){
        printf("Ecrivez seulement une lettre\n");
        scanf("%c", &clean_up);
    }


    if (lettre >= 'a' && lettre <= 'z') {
        lettre_convertie = lettre - 32;
        printf("La lettre %c en majuscule est %c et son code ASCII est %d", lettre, lettre_convertie, lettre_convertie );
    } else {
        lettre_convertie = lettre + 32;
        printf("La lettre %c en minuscule est %c et son code ASCII est %d", lettre, lettre_convertie, lettre_convertie );
    }
    return 0;
}
