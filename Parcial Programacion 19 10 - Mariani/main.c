#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    int id;
    char procesador[30];
    char marca[30];
    int precio;
}Notebook;


void aplicarDescuento(int precio);
void contarCaracteres(char cadena[], char caracter, int tam);
void listarNotebook(Notebook lista[], int tam);

int main()
{
    //1
    int precio1;

    //2
    char cadena[1000];
    char caracter;
    int tam2;

    //3
    //int tam3;
    //Notebook lista[];

    //1
    printf("\n Punto 1, ingrese el precio del producto  >");
    fflush(stdin);
    scanf("%d", &precio1);
    aplicarDescuento(precio1);

    //2

    printf("\n Punto 2, ingrese cadena de caracteres  >");
    fflush(stdin);
    gets(cadena);

    tam2=strlen(cadena);

    printf("\n Punto 2, ingrese caracter a buscar  >");
    fflush(stdin);
    scanf("%c", &caracter);

    contarCaracteres(cadena, caracter, tam2);

    //3

}


void aplicarDescuento(int precio)
{


    float total;

    total=(float)precio*0.95;

    printf ("- El precio total es: %.3f", total);
}


void contarCaracteres(char cadena[], char caracter, int tam){

    int contador=0;

    for(int i=0; i<tam; i++)
    {
        if(cadena[i]==caracter)
        {
            contador++;

        }
    }

    printf("\n- Cantidad de caracteres: %d", contador);
}


/*

void listarNotebook(Notebook lista[], int tam)
{

    Notebook auxiliarNotebook;

    if(lista != NULL && tam>0)
    {
        for(int i=0; i<tam-1; i++)
        {
            for(int j=i+1; j<tam; j++)
            {
                if((strcmp(lista[i].marca, lista[j].marca)==0 && lista[i].precio>lista[j].precio) || strcmp(lista[i].marca, lista[j].marca)>0 )
                {
                    auxiliarNotebook=lista[i];
                    lista[i]=lista[j];
                    lista[j]=auxiliarNotebook;
                }
            }
        }
    }
    printf("%d \n %s \n %s \n  %d", listado[i].id, listado[i].procesador, listado[i].marca, listado[i].precio);
}
*/

