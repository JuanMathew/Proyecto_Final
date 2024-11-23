/*Sistema de ecuaciones n*m*/
#include <stdio.h>
#include "matrices.h"
int main(){
printf("Bienvenidos a todos y todas y todes.\n");
int matriz[2][2];
int *puntero = &matriz[0][0];
leerM(puntero,2,2);
imprimirM(2,2,matriz);
return 0;
}