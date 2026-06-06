#include <stdint.h>
#include <stdio.h>
#include "LIBRERIAS/INTERFAZ_DE_USUARIO/menus.h"
#include "LIBRERIAS/DOMINIO/gestorEventos.h"

#define PRESENTACIONESGOTY "goty.bin"

void saludo();



int main()
{
	abrirArchivoLimpio(PRESENTACIONESGOTY);
	cargarArchivoConNominaciones(PRESENTACIONESGOTY);
	return 0;
}

void saludo()
{
	printf("hola banana.");
	printf("hola natrox.");
}