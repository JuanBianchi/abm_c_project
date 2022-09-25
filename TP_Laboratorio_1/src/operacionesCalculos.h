#ifndef OPERACIONESCALCULOS_H_
#define OPERACIONESCALCULOS_H_



#endif /* OPERACIONESCALCULOS_H_ */

/** \brief  guarda los costos de mantenimiento y los acumula mientras se van ingresando para luego mostrarse en la funcion menuPrincipal
 *
 * \param pCostos int*  escribe en las direcciones de memoria de las variables totalHospedaje, totalComida y totalTransporte.
 * \return int  devuelve 1 si la funcion se realizo correctamente o 0 si no se realizo.
 *
 */
int funcionCostos(int* pCostos);

/** \brief      permite el ingreso de camiseta, posicion y confederacion que el usuario elija y cuenta las respectivas confederaciones para que se muestren en la funcion menuPrincipal
 *
 * \param pConmebol int*    apunta a la direccion de memoria de la variable conmebol para escribir en ella la cantidad de veces que el usuario elige la opcion conmebol.
 * \param pConcacaf int*    apunta a la direccion de memoria de la variable concacaf para escribir en ella la cantidad de veces que el usuario elige la opcion concacaf.
 * \param pUefa int*        apunta a la direccion de memoria de la variable uefa para escribir en ella la cantidad de veces que el usuario elige la opcion uefa.
 * \param pAfc int*         apunta a la direccion de memoria de la variable afc para escribir en ella la cantidad de veces que el usuario elige la opcion afc.
 * \param pOfc int*         apunta a la direccion de memoria de la variable ofc para escribir en ella la cantidad de veces que el usuario elige la opcion ofc.
 * \param pCaf int*         apunta a la direccion de memoria de la variable caf para escribir en ella la cantidad de veces que el usuario elige la opcion caf.
 * \return int  devuelve 1 si la funcion se realizo correctamente o 0 si no lo hace
 *
 */
int funcionPosicionesConfed(int* pConmebol, int* pConcacaf, int* pUefa, int* pAfc, int* pOfc, int* pCaf);

/** \brief      calcula los promedios de las confederaciones ingresadas y la totalidad de los costos con su respectivo aumento si es que lo hay.
 *
 * \param pTotalCostos int*     apunta a la direccion de memoria de la variable totalCostos para acumular los costos de mantenimiento
 * \param pNuevoMantenimiento int*      apunta a la direccion de memoria de la variable nuevoMantenimiento para calcular los costos totales de mantenimiento con el aumento del %35
 * \param pAumento int*         apunta a la direccion de memoria de la variable aumentoAplicado para calcular el %35 de aumento.
 * \param pPromedioConmebol float*      apunta a la direccion de memoria de la variable promedioConmebol para escribirle el valor del promedio de conmebol
 * \param pPromedioConcacaf float*      apunta a la direccion de memoria de la variable promedioConcacaf para escribirle el valor del promedio de concacaf
 * \param pPromedioUefa float*          apunta a la direccion de memoria de la variable promedioUefa para escribirle el valor del promedio de uefa
 * \param pPromedioAfc float*           apunta a la direccion de memoria de la variable promedioAfc para escribirle el valor del promedio de afc
 * \param pPromedioOfc float*           apunta a la direccion de memoria de la variable promedioOfc para escribirle el valor del promedio de ofc
 * \param pPromedioCaf float*           apunta a la direccion de memoria de la variable promedioCaf para escribirle el valor del promedio de caf
 * \param fedConmebol int               recibe el valor guardado en la variable conmebol para calcular el promedioConmebol
 * \param fedConcacaf int               recibe el valor guardado en la variable concacaf para calcular el promedioConcacaf
 * \param fedUefa int                   recibe el valor guardado en la variable uefa para calcular el promedioUefa
 * \param fedAfc int                    recibe el valor guardado en la variable afc para calcular el promedioAfc
 * \param fedOfc int                    recibe el valor guardado en la variable ofc para calcular el promedioOfc
 * \param fedCaf int                    recibe el valor guardado en la variable caf para calcular el promedioCaf
 * \param cantArqueros int              recibe el valor guardado en la variable arqueros para calcular el promedio de confederaciones
 * \param cantDefensores int            recibe el valor guardado en la variable defensores para calcular el promedio de confederaciones
 * \param cantMediocampistas int        recibe el valor guardado en la variable volantes para calcular el promedio de confederaciones
 * \param cantDelanteros int            recibe el valor guardado en la variable delanteros para calcular el promedio de confederaciones
 * \param hospedaje int                 recibe el valor guardado en la variable totalHospedaje para calcular el costo de mantenimiento y el costo de mantenimiento con el aumento
 * \param comida int                    recibe el valor guardado en la variable totalComida para calcular el costo de mantenimiento y el costo de mantenimiento con el aumento
 * \param transporte int                recibe el valor guardado en la variable totalTransporte para calcular el costo de mantenimiento y el costo de mantenimiento con el aumento
 * \param valorAumento int              recibe el valor de la variable aumento para calcular la aplicacion del aumento
 * \return int                          retorna 1 si se realizaron los calculos correctamente o 0 si no se realizo correctamente
 *
 */
int realizarCalculos(int* pTotalCostos, int* pNuevoMantenimiento, int* pAumento, float* pPromedioConmebol, float* pPromedioConcacaf, float* pPromedioUefa, float* pPromedioAfc, float* pPromedioOfc, float* pPromedioCaf, int fedConmebol, int fedConcacaf, int fedUefa, int fedAfc, int fedOfc, int fedCaf, int cantArqueros, int cantDefensores, int cantMediocampistas, int cantDelanteros, int hospedaje, int comida, int transporte, int valorAumento);

/** \brief  permite salir del programa y pregunta por confirmacion
 *
 * \param punteroSalir char*    apunta a la direccion de memoria de la variable seguir, que funciona como condicion del do while de la funcion main.
 * \param aceptar char  recibe el caracter 's'
 * \param rechazar char recibe el caracter 'n'
 * \return int  devuelve 1 si la funcion se ejecuto correctamente o 0 si no se ejecuto correctamente
 *
 */
int salir(char* punteroSalir, char aceptar, char rechazar);
