#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int matriz[5][12];
    int suma, promedio, min, max;

    //Carga los elementos de la matriz
    for(int i=0; i<5; i++){
        for(int j=0; j<12; j++){
            matriz[i][j]=10000+rand()%50000;
        }
    }

    //Muestra los elementos de la matriz
    for(int i=0; i<5; i++){
        for(int j=0; j<12; j++){
            printf("\t%d", matriz[i][j]); 
        }
        printf("\n");
    }

    //Promedio de ganancias por anio
    for(int i=0; i<5; i++){
        suma=0;
        for(int j=0; j<12; j++){
            suma=suma+matriz[i][j];
        }
        promedio=suma/12;
        printf("\nPromedio ganancias por anio[%d]: %d", i, promedio);
    }

    //Seccion que identifica los maximos y minimos
    for(int i=0; i<5; i++){
        for(int j=0; j<12; j++){
            matriz[i][j];
            if(i==0 && j==0){
                min=matriz[i][j];
                max=matriz[i][j];
            } else{
                if(matriz[i][j]<min){
                    min=matriz[i][j];
                }
                if(matriz[i][j]>max){
                    max=matriz[i][j];
                }
            }
        }
    }
    printf("\nMinimo: %d; Maximo: %d", min, max);
    
}