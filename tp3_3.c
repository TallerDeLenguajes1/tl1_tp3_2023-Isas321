#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
    char **V=(char **)malloc(sizeof(char*)*5);
    //Utilizo ** porque es un vector de cadenas, es decir un vector de punteros
    //Reservo 5 vectores de cadenas(vectores de char) malloc(sizeof(char*)*5)
    char *buff; //Variable auxiliar, es el que almacena palabras, hasta 20 caracteres?
    buff=(char *)malloc(sizeof(char)*20);
    //Reservo memoria para una palabra de 20 caracteres
    for (int i = 0; i < 5; i++){
        V[i]=(char *)malloc(sizeof(char)*(strlen(buff)+1));
        //Importante que la reserva se haga con la cantidad de caracteres que se ocuparon
        //Es por esto que usamos strlen y sumamos  1
        printf("Ingrese nombre: ");
        gets(buff);
        strcpy(V[i], buff);
    }
    
    // //Muestra los nombres recorriendo los caracteres uno por uno
    // for (int i = 0; i < 5; i++){
    //     printf("\nNombre[%d]: ", i);
    //     for (int j = 0; j < strlen(V[i]); j++){
    //         printf("%c", V[i][j]);
    //     }
    // }

    //Muestra el string directamente
    for (int i = 0; i < 5; i++){    
        printf("\nNombre[%d]: %s", i, V[i]);
    }

    //Siempre que se haga uso de malloc es importante liberar la memoria
    free(buff); //Aqui borro la palabra auxiliar guardada
    for (int i = 0; i < 5; i++){    
        free(V[i]); //Aqui borro cara una de las palabras que se cargaron
    }
    free(V); //Aqui borro el vector de palabras
}