#include "menus.h"
#include "../DOMINIO/cabeceraEntidades/nominaciones.h"


//ESTA CAPA SERA LA UNICA ENCARGADA DE SOLICITAR DATOS AL USUARIO.
// SE RECOMIENDA EL USO RESPONSABLE DE IA.
// TODO EL CODIGO ENTREGADO DEBE PODER SER DEFENDIDO POR CUALQUIER INTEGRANTE DEL GRUPO.



void menuPrincipal()
{
	printf("MENU PRINCIPAL.\n");
}

void mostrarunaNominacion(Nominacion aux)
{
	printf("============================\n");
	printf("ID NOMINACION: %d\n", aux.idNominacion);
	printf("NOMBRE DE JUEGO: %s | Nombre de Estudio: %s \n", aux.juego.nombre, aux.juego.estudio);
	printf("PUNTAJE: %.1f \n", aux.puntaje.valorPuntaje);
	printf("============================\n");
}