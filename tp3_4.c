#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct producto{
    int productoID; //Numerado en ciclo iterativo
    int cantidad; // entre 1 y 10
    char *TipoProducto; // Algún valor del arreglo TiposProductos
    float precioUnitario;// entre 10 - 100 
};

struct cliente{
    int clienteID; 
    char nombreCliente;
    int cantProductosAPedir;
    struct producto *productos;
};



int main(){
    char *TipoProductos[]={"Galletas", "Snak", "Cigarros", "Caramelos", "Bebidas"};

    return 0;
}