#include "../cabeceraEntidades/nominaciones.h"
#include "../cabeceraEntidades/juegos.h"




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

	return aux;
}
