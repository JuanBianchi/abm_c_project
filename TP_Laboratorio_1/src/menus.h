#ifndef MENUS_H_
#define MENUS_H_



#endif /* MENUS_H_ */

/** \brief muestra valores inciales y actualizados por el usuario al elegir las opciones e ingresar los datos pedidos.
 *
 * \param hospedaje int recibe el valor inicial y actualizado de la variable totalHospedaje y lo muestra
 * \param comida int    recibe el valor inicial y actualizado de la variable totalComida y lo muestra
 * \param transporte int    recibe el valor inicial y actualizado de la variable totalTransporte y lo muestra
 * \param posArq int    recibe el valor inicial y actualizado de la variable arqueros y lo muestra
 * \param posDef int    recibe el valor inicial y actualizado de la variable defensores y lo muestra
 * \param posMed int    recibe el valor inicial y actualizado de la variable volantes y lo muestra
 * \param posDel int    recibe el valor inicial y actualizado de la variable delanteros y lo muestra
 * \return void
 *
 */
void menuPrincipal(int hospedaje,int comida,int transporte, int posArq, int posDef, int posMed, int posDel);

/** \brief  submenu que muestra las opciones de mantenimiento al ser elegidas en el menu principal
 *
 * \param hospedaje int muestra el valor inicial y actualizado de la variable costoHospedaje
 * \param comida int    muestra el valor inicial y actualizado de la variable costoComida
 * \param transporte int    muestra el valor inicial y actualizado de la viariable costoTransporte
 * \return void
 *
 */
void opcionesCostos(int hospedaje, int comida, int transporte);

/** \brief  muestra las opciones de posiciones que van a ser elegidas por el usuario
 *
 * \return void
 *
 */
void elegirPosicion();

/** \brief  muestra los resultados de los promedios y totalidad de costos de mantenimiento con o sin aumento en pantalla
 *
 * \param promConmebol float    recibe el valor de la variable conmebol para mostrarlo por pantalla
 * \param promConcacaf float    recibe el valor de la variable concacaf para mostrarlo por pantalla
 * \param promUefa float        recibe el valor de la variable uefa para mostrarlo por pantalla
 * \param promAfc float         recibe el valor de la variable afc para mostrarlo por pantalla
 * \param promOfc float         recibe el valor de la variable ofc para mostrarlo por pantalla
 * \param promCaf float         recibe el valor de la variable caf para mostrarlo por pantalla
 * \param contadorConmebol int  recibe el valor de la variable conmebol para compararlo con el contadorUefa
 * \param contadorConcacaf int  recibe el valor de la variable concacaf para compararlo con el contadorUefa
 * \param contadorUefa int      recibe el valor de la variable uefa para compararlo con los demas contadores de confederaciones
 * \param contadorAfc int       recibe el valor de la variable afc para compararlo con el contadorUefa
 * \param contadorOfc int       recibe el valor de la variable ofc para compararlo con el contadorUefa
 * \param contadorCaf int       recibe el valor de la variable caf para compararlo con el contadorUefa
 * \param costosTotales int     recibe el valor de la variable totalCostos para mostrarlo por pantalla
 * \param costoMantenimientoConAumento int  recibe el valor de la variable nuevoMantenimiento para mostrarlo por pantalla
 * \param montoAumento int      recibe el valor de la variable aumentoAplicado para mostrarlo por pantalla
 * \return void
 *
 */
void mostrarResultados(float promConmebol, float promConcacaf, float promUefa, float promAfc, float promOfc, float promCaf, int contadorConmebol, int contadorConcacaf, int contadorUefa, int contadorAfc, int contadorOfc, int contadorCaf, int costosTotales, int costoMantenimientoConAumento, int montoAumento);

