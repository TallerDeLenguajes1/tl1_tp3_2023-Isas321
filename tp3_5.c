#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

    int n;
    char *buff; //Variable auxiliar, es el que almacena palabras, hasta 20 caracteres?
    buff=(char *)malloc(sizeof(char)*20);
    //Reservo memoria para una palabra de 20 caracteres
    printf("\nCantidad de nombres que desea ingresar: ");
    scanf("%d",&n);
    getchar();
    char **V=(char **)malloc(sizeof(char*)*n);

    for (int i = 0; i < n; i++){
        V[i]=(char *)malloc(sizeof(char)*(strlen(buff)+1));
        //Importante que la reserva se haga con la cantidad de caracteres que se ocuparon
        //Es por esto que usamos strlen y sumamos  1
        printf("Ingrese nombre: ");
        gets(buff);
        strcpy(V[i], buff);//Copia al vector de nombres
    }
    
    // //Muestra los nombres recorriendo los caracteres uno por uno
    // for (int i = 0; i < 5; i++){
    //     printf("\nNombre[%d]: ", i);
    //     for (int j = 0; j < strlen(V[i]); j++){
    //         printf("%c", V[i][j]);
    //     }
    // }

    //Muestra el string directamente
    for (int i = 0; i < n; i++){    
        printf("\nNombre[%d]: %s", i, V[i]);
    }

    //Siempre que se haga uso de malloc es importante liberar la memoria
    free(buff); //Aqui borro la palabra auxiliar guardada
    for (int i = 0; i < 5; i++){    
        free(V[i]); //Aqui borro cara una de las palabras que se cargaron
    }
    free(V); //Aqui borro el vector de palabras
}