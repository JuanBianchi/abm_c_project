#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "operacionesCalculos.h"

int funcionCostos(int* pCostos)
{
    int retorno= 0;
    int costos;

    if(pCostos != NULL)
    {
        scanf("%d", &costos);
        *pCostos += costos;
        retorno= 1;
    }

    return retorno;
}

int funcionPosicionesConfed(int* pConmebol, int* pConcacaf, int* pUefa, int* pAfc, int* pOfc, int* pCaf)
{
    int todoOk= 0;
    int confederaciones;
    int camiseta;
    int posicionNumerica;

    if(pConmebol != NULL && pConcacaf != NULL && pUefa != NULL && pAfc != NULL && pOfc != NULL && pCaf != NULL)
    {
        system("cls");
        printf("Ingrese el numero de camiseta: ");
        scanf("%d", &camiseta);
        printf("Ingrese la posicion numerica en la que va a jugar: ");
        scanf("%d", &posicionNumerica);
        printf("Ingrese a que confederacion pertenece:\n"
               "1) Conmebol\n"
               "2) Concacaf\n"
               "3) Uefa\n"
               "4) AFC\n"
               "5) OFC\n"
               "6) CAF\n");
        scanf("%d", &confederaciones);

        switch(confederaciones)
        {
            case 1:
                *pConmebol= *pConmebol + 1;
                break;
            case 2:
                *pConcacaf= *pConcacaf + 1;
                break;
            case 3:
                *pUefa= *pUefa + 1;
                break;
            case 4:
                *pAfc= *pAfc + 1;
                break;
            case 5:
                *pOfc= *pOfc + 1;
                break;
            case 6:
                *pCaf= *pCaf + 1;
                break;
        }

        todoOk= 1;
    }

    return todoOk;
}

int realizarCalculos(int* pTotalCostos, int* pNuevoMantenimiento, int* pAumento, float* pPromedioConmebol, float* pPromedioConcacaf, float* pPromedioUefa, float* pPromedioAfc, float* pPromedioOfc, float* pPromedioCaf, int fedConmebol, int fedConcacaf, int fedUefa, int fedAfc, int fedOfc, int fedCaf, int cantArqueros, int cantDefensores, int cantMediocampistas, int cantDelanteros, int hospedaje, int comida, int transporte, int valorAumento)
{
    int retornarValor= 0;

    if(pTotalCostos != NULL && pPromedioConmebol != NULL && pPromedioConcacaf != NULL && pPromedioUefa != NULL && pPromedioAfc != NULL && pPromedioOfc != NULL && pPromedioCaf != NULL)
    {
        *pPromedioConmebol= (float)fedConmebol/(cantArqueros + cantDefensores + cantMediocampistas + cantDelanteros);
        *pPromedioConcacaf= (float)fedConcacaf/(cantArqueros + cantDefensores + cantMediocampistas + cantDelanteros);
        *pPromedioUefa= (float)fedUefa/(cantArqueros + cantDefensores + cantMediocampistas + cantDelanteros);
        *pPromedioAfc= (float)fedAfc/(cantArqueros + cantDefensores + cantMediocampistas + cantDelanteros);
        *pPromedioOfc= (float)fedOfc/(cantArqueros + cantDefensores + cantMediocampistas + cantDelanteros);
        *pPromedioCaf= (float)fedCaf/(cantArqueros + cantDefensores + cantMediocampistas + cantDelanteros);

        *pTotalCostos= hospedaje + comida + transporte;

        if(fedUefa > fedConmebol && fedUefa > fedConcacaf && fedUefa > fedAfc && fedUefa > fedCaf && fedUefa > fedOfc)
        {
            *pAumento= ((hospedaje + comida + transporte) * valorAumento) / 100;
            *pNuevoMantenimiento= hospedaje + comida + transporte + *pAumento;
        }

        retornarValor= 1;
    }

    return retornarValor;
}

int salir(char* punteroSalir, char aceptar, char rechazar)
{
    int valido= 0;
    char retornoSiNo;

    system("cls");
    if(punteroSalir != NULL)
    {
        printf("Esta seguro que quiere salir?\n\nPresione la tecla s para confirmar\nPresione la tecla n para volver al menu principal\n");
        fflush(stdin);
        retornoSiNo= getch();
        if(retornoSiNo != 's')
        {
            *punteroSalir= aceptar;
        }
        else
        {
            *punteroSalir= rechazar;
        }

        valido= 1;
    }

    return valido;
}


