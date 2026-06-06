#include "servicio.h"
#include <stdio.h>
#include <stdlib.h>

void mostrarGOTYS(char nombreArchivo)
{
	FILE* fp;
	fp = fopen(nombreArchivo, "rb");

	if (!fp)
	{
		printf("Error no se pudo abrir el archivo.\n");
		return;
	}




	fclose(fp);
}