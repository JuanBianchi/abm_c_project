#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "menus.h"

void menuPrincipal(int hospedaje,int comida,int transporte, int posArq, int posDef, int posMed, int posDel)
{
    printf("    *** MENU PRINCIPAL ***\n\n");
    printf("1. Costo de mantenimiento: \n"
           " Costo de hospedaje -> $%d\n"
           " Costo de comida -> $%d\n"
           " Costo de transporte -> $%d\n",hospedaje ,comida ,transporte);
    printf("2. Carga de jugadores: \n"
           " Arqueros -> %d\n"
           " Defensores -> %d\n"
           " Mediocampistas -> %d\n"
           " Delanteros -> %d\n", posArq, posDef, posMed, posDel);
    printf("3. Realizar todos los calculos \n");
    printf("4. Informar todos los calculos \n");
    printf("5. Salir.\n");

}

void opcionesCostos(int hospedaje, int comida, int transporte)
{
    printf("    **Costos de Mantenimiento**\n\n"
        "1-Costo de hospedaje -> %d \n"
        "2-Costo de comida -> %d \n"
        "3-Costo de transporte -> %d \n\n"
        "4-Volver\n\n", hospedaje, comida, transporte);

}

void elegirPosicion()
{
     printf("    **POSICIONES**\n\n"
        "1) Arqueros\n"
        "2) Defensores\n"
        "3) Mediocampistas\n"
        "4) Delanteros\n");

}

void mostrarResultados(float promConmebol, float promConcacaf, float promUefa, float promAfc, float promOfc, float promCaf, int contadorConmebol, int contadorConcacaf, int contadorUefa, int contadorAfc, int contadorOfc, int contadorCaf, int costosTotales, int costoMantenimientoConAumento, int montoAumento)
{
    system("cls");

    printf("El promedio de conmebol es %.2f\n"
            "el promedio de concacaf es %.2f\n"
            "el promedio de uefa es %.2f\n"
            "el promedio de afc es %.2f\n"
            "el promedio de ofc es %.2f\n"
            "el promedio de caf es %.2f\n\n", promConmebol, promConcacaf, promUefa, promAfc, promOfc, promCaf);

    if(contadorUefa > contadorConmebol && contadorUefa > contadorConcacaf && contadorUefa > contadorAfc && contadorUefa > contadorCaf && contadorUefa > contadorOfc)
    {
        printf("El costo total de mantenimiento era de %d y recibio un aumento de %d, su nuevo costo es de %d\n\n", costosTotales, montoAumento, costoMantenimientoConAumento);
    }
    else
    {
        printf("El costo total de mantenimiento es %d.\n", costosTotales);
    }

}
