#define _CRT_SECURE_NO_WARNINGS

#include "menus.h"
#include "../DOMINIO/cabeceraEntidades/nominaciones.h"
#include <stdio.h>


//ESTA CAPA SERA LA UNICA ENCARGADA DE SOLICITAR DATOS AL USUARIO.
// SE RECOMIENDA EL USO RESPONSABLE DE IA.
// TODO EL CODIGO ENTREGADO DEBE PODER SER DEFENDIDO POR CUALQUIER INTEGRANTE DEL GRUPO.



void menuPrincipal()
{
	printf("MENU PRINCIPAL.\n");
}

void mostrarunaNominacion(Nominacion aux)
{
	int ancho=75;
	char renglonId[100];
	char renglonJuego[150];
	char renglonPuntaje[100];

	sprintf(renglonId, "ID NOMINACION: %d.", aux.idNominacion);
	sprintf(renglonJuego, "NOMBRE DE JUEGO: %s | NOMBRE DEL ESTUDIO: %s", aux.juego.nombre, aux.juego.estudio);
	sprintf(renglonPuntaje, "PUNTAJE: %.1f", aux.puntaje.valorPuntaje);

	printf("+"); for (int i = 0; i < ancho; i++) printf("="); printf("+\n");
	printf("| %-*s |\n", ancho - 2, renglonId);
	printf("| %-*s |\n", ancho - 2, renglonJuego);
	printf("| %-*s |\n", ancho - 2, renglonPuntaje);
	printf("+"); for (int i = 0; i < ancho; i++) printf("="); printf("+\n");

}