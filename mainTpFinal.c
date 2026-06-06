#include <stdint.h>
#include <stdio.h>
#include "LIBRERIAS/INTERFAZ_DE_USUARIO/menus.h"
#include "LIBRERIAS/DOMINIO/gestorEventos.h"
#include "LIBRERIAS/SERVICIO/servicio.h"

#define PRESENTACIONESGOTY "goty.bin"


int main()
{
	/*abrirArchivoLimpio(PRESENTACIONESGOTY);*/
	/*cargarArchivoConNominaciones(PRESENTACIONESGOTY);*/
	mostrarGOTYS(PRESENTACIONESGOTY);
	
	return 0;
}
