#include <stdio.h>
#include "matrices.h"
//Leer
void leerM(int *puntero, int n, int m){
int i,j;
printf("Ahora: ");
for(i=0;i<n;i++){
for(j=0;j<m;j++){printf("Ingrese el valor de la posicion [%d][%d]: ",i+1,j+1);
scanf("%d",&*(puntero+(i*m+j)));}}}
//Imprimir
void imprimirM(int n, int m, int matriz[n][m]){
int i,j;
printf("La matriz ingresada es: \n");
for(i=0;i<n;i++){
for(j=0;j<m;j++){printf("%d\t",matriz[i][j]);}
printf("\n");}}