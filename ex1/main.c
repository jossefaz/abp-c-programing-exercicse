#include <stdio.h>

void input_num(int* num) {
    while (scanf("%f", num) == 0 ) {
        printf("la saisie doit etre un entier : saisir a nouveau \n");
        scanf("%*s");
    }
}

int ceil(float num){
    int tmp1;
    float tmp2;
    tmp1 = (int) num;
    tmp2 = num - tmp1;
    if (tmp2 > 0){
        return tmp1 + 1;
    }
    return tmp1;
}
int main() {
  const SURFACE_POT = 7.5;
  float lon = 0.;
  float lar = 0.;
  float area;
  int nombre_pot;
  printf("saisir la longueur de la piece \n");
  input_num(&lon);
  printf("saisir la largueur de la piece\n");
  input_num(&lar);

  area = lon * lar;

  printf("il faudra %d pots pour couvrir la surface", ceil(area / SURFACE_POT));

  return 0;

}
