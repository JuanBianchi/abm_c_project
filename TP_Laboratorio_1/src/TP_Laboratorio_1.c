#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "menus.h"
#include "operacionesCalculos.h"

int main()
{
	setbuf(stdout, NULL);

    int totalHospedaje= 0;
    int totalComida= 0;
    int totalTransporte= 0;
    char seguir= 's';
    int opciones;
    int posicion;
    int banderaCalculos= 0;
    int arqueros= 0;
    int defensores= 0;
    int volantes= 0;
    int delanteros= 0;

    int conmebol= 0;
    int concacaf= 0;
    int caf= 0;
    int afc= 0;
    int uefa= 0;
    int ofc= 0;

    float promedioConmebol;
    float promedioConcacaf;
    float promedioUefa;
    float promedioAfc;
    float promedioCaf;
    float promedioOfc;

    int totalCostos;
    int aumento= 35;
    int aumentoAplicado;
    int nuevoMantenimiento;


    do
    {

        system("cls");
        menuPrincipal(totalHospedaje, totalComida, totalTransporte, arqueros, defensores, volantes, delanteros);
        scanf("%d", &opciones);

        switch(opciones)
        {
            case 1:
                system("cls");
                opcionesCostos(totalHospedaje, totalComida, totalTransporte);
                scanf("%d", &opciones);

                switch(opciones)
                {
                    case 1:
                        system("cls");
                        printf("Ingrese el costo de hospedaje: ");
                        if(funcionCostos(&totalHospedaje))
                        {
                            printf("Costo guardado!\n");
                            system("pause");
                        }
                        else
                        {
                            printf("ERROR. No se pudo guardar el costo.");
                            system("pause");
                        }
                        break;
                    case 2:
                        system("cls");
                        printf("Ingrese el costo de la comida: ");

                        if(funcionCostos(&totalComida))
                        {
                            printf("Costo guardado!\n");
                            system("pause");
                        }
                        else
                        {
                            printf("ERROR. No se pudo guardar el costo.");
                            system("pause");
                        }
                        break;
                    case 3:
                        system("cls");
                        printf("Ingrese el costo del transporte: ");

                        if(funcionCostos(&totalTransporte))
                        {
                            printf("Costo guardado!\n");
                            system("pause");
                        }
                        else
                        {
                            printf("ERROR. No se pudo guardar el costo.");
                            system("pause");
                        }
                    break;
                    case 4:
                    break;
                    default:
                        printf("Esa opcion no es correcta. Intentelo nuevamente.\n");
                        system("pause");
                }
                break;
            case 2:
                system("cls");
                elegirPosicion();
                scanf("%d", &posicion);
                switch(posicion)
                {
                    case 1:
                        if(arqueros == 0 || arqueros < 2)
                        {
                            arqueros++;
                            if(funcionPosicionesConfed(&conmebol, &concacaf, &uefa, &afc, &ofc, &caf)) //Le paso las direcciones de memoria para que el contador vaya asignandole los valores de cada vez que se elija la funcion.
                            {
                                printf("Datos guardados correctamente.\n");
                                system("pause");

                            }
                            else
                            {
                                printf("ERROR. No se pudo ingresar el dato\n");
                                system("pause");
                            }

                        }
                        else
                        {
                            printf("Ha alcanzado el limite permitido de arqueros.\n");
                            system("pause");
                        }
                    break;
                    case 2:
                        if(defensores == 0 || defensores < 8)
                        {
                            defensores++;
                            if(funcionPosicionesConfed(&conmebol, &concacaf, &uefa, &afc, &ofc, &caf))
                            {
                                printf("Datos guardados correctamente.\n");
                                system("pause");

                            }
                            else
                            {
                                printf("ERROR. No se pudo ingresar el dato\n");
                                system("pause");
                            }
                        }
                        else
                        {
                            printf("Ha alcanzado el limite permitido de defensores.\n");
                            system("pause");
                        }
                    break;
                    case 3:
                    if(volantes == 0 || volantes < 8)
                        {
                            volantes++;
                            if(funcionPosicionesConfed(&conmebol, &concacaf, &uefa, &afc, &ofc, &caf))
                            {
                                printf("Datos guardados correctamente.\n");
                                system("pause");

                            }
                            else
                            {
                                printf("ERROR. No se pudo ingresar el dato\n");
                                system("pause");
                            }
                        }
                        else
                        {
                            printf("Ha alcanzado el limite permitido de volantes.\n");
                            system("pause");
                        }
                    break;
                    case 4:
                        if(delanteros == 0 || delanteros < 4)
                        {
                            delanteros++;
                            if(funcionPosicionesConfed(&conmebol, &concacaf, &uefa, &afc, &ofc, &caf))
                            {
                                printf("Datos guardados correctamente.\n");
                                system("pause");

                            }
                            else
                            {
                                printf("ERROR. No se pudo ingresar el dato\n");
                                system("pause");
                            }
                        }
                        else
                        {
                            printf("Ha alcanzado el limite permitido de delanteros.\n");
                            system("pause");
                        }
                }
                break;
            case 3:
            if((totalComida > 0 && totalHospedaje > 0 && totalTransporte > 0) && (arqueros > 0 || defensores > 0 || volantes > 0 || delanteros > 0))
            {
                    system("cls");
                    if(realizarCalculos(&totalCostos, &nuevoMantenimiento, &aumentoAplicado, &promedioConmebol, &promedioConcacaf, &promedioUefa, &promedioAfc, &promedioCaf, &promedioOfc, conmebol, concacaf, uefa, afc, caf, ofc, arqueros, defensores, volantes, delanteros, totalHospedaje, totalComida, totalTransporte, aumento))
                    {
                        banderaCalculos= 1;
                        printf("Se realizaron los calculos exitosamente!\n");
                        system("pause");
                    }
                    else
                    {
                        printf("No se pudieron realizar los calculos.\n");
                    }
                    break;
            }
            else
            {
                printf("ERROR. Primero hay que ingresar los tres costos y un jugador.\n");
                system("pause");
            }
            break;
            case 4:
            if(banderaCalculos == 1)
            {
                mostrarResultados(promedioConmebol, promedioConcacaf, promedioUefa, promedioAfc, promedioOfc, promedioCaf, conmebol, concacaf, uefa, afc, ofc, caf, totalCostos, nuevoMantenimiento, aumentoAplicado);
                system("pause");
            }
            else
            {
                printf("ERROR. Para mostrar los resultados, primero se deben realizar los calculos.\n");
                system("pause");
            }
            break;
            case 5:
                salir(&seguir, 's', 'n');
                break;
        }


    }while(seguir != 'n');

    return 0;
}
