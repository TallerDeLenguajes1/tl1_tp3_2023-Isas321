#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct producto{
    int productoID;         //Numerado en ciclo iterativo
    int cantidad;       // entre 1 y 10
    char *TipoProducto;         // Algún valor del arreglo TiposProductos
    float precioUnitario;       // entre 10 - 100 
};

struct cliente{
    int clienteID;      // Numerado en el ciclo iterativo
    char nombreCliente;     // Ingresado por usuario
    int cantProductosAPedir;        // (aleatorio entre 1 y 5)
    struct producto *productos;     //El tamaño de este arreglo depende de la variable
};



int main(){
    char *TipoProductos[]={"Galletas", "Snak", "Cigarros", "Caramelos", "Bebidas"};
    int cantClientes;
    
    printf("\nCantidad de clientes: ");
    scanf("%d", cantClientes);
    getchar();


    return 0;
}