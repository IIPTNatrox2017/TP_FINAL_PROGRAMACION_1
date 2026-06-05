#define _CRT_SECURE_NO_WARNINGS
#include "../cabeceraEntidades/juegos.h"
#include "../../Librerias Externas/scanner.h"
#include <stdio.h>

#define DIM_MAX_NOMBRES 50


Juego cargarUnJuego(Juego aux)
{
	printf("Ingrese id del juego\n >>> ");
	aux.idJuego = scanInt();

	printf("Ingrese Nombre del Juego:\n >>> ");
	scanString(aux.nombre, DIM_MAX_NOMBRES);

	printf("Ingrese Nombre del Estudio:\n >>> ");
	scanString(aux.estudio, DIM_MAX_NOMBRES);

	printf("Ingrese Genero del Juego:\n >>> ");
	scanString(aux.genero, DIM_MAX_NOMBRES);

	return aux;
}

Categoria cargarUnaCategoria(Categoria aux)
{
	printf("Ingrese id de la Categoria:\n >>> ");
	aux.idCategoria = scanInt();

	printf("Ingrese Nombre de la Categoria a la que Pertenece:\n >>> ");
	scanString(aux.nombre, DIM_MAX_NOMBRES);

	return aux;
}

FechaLanzamiento cargarFLanzamiento(FechaLanzamiento aux)
{
	int nominado = 1;
	printf("Ingrese dia del lanzamiento:\n >>> ");
	aux.dia = scanInt();

	printf("Ingrese mes del Lanzamiento:\n >>> ");
	aux.mes = scanInt();

	printf("Ingrese anio del Lanzamiento:\n >>> ");
	aux.anio = scanInt();

	return aux;
}


Puntaje cargarPuntajeJuego(Puntaje aux)
{
	printf("Ingrese Puntaje de Juego:\n >>> ");
	aux.valorPuntaje = scanFloat();

	return aux;
}
