#define _CRT_SECURE_NO_WARNINGS

#include "../cabeceraEntidades/nominaciones.h"
#include "../cabeceraEntidades/juegos.h"
#include "../../Librerias Externas/scanner.h"
#include <stdio.h>




Nominacion cargarNominacion(Nominacion aux)
{
	int nominado = 1;
	printf("-- CARGAR NOMINACION A JUEGO --\n");

	printf("Ingrese Id de la nominacion:\n >>> ");
	aux.idNominacion = scanInt();

	aux.juego = cargarUnJuego(aux.juego);
	aux.categoria = cargarUnaCategoria(aux.categoria);
	aux.fecha = cargarFLanzamiento(aux.fecha);
	aux.puntaje = cargarPuntajeJuego(aux.puntaje);

	printf("Este juego esta nominado? [s/n]\n >>> ");
	nominado = confirmar('s');

	printf("Juego Guardado Con exito");

	system("pause");
	system("cls");

	return aux;
}
