#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "gestorEventos.h"
#include "../Librerias Externas/scanner.h"
#include "cabeceraEntidades/juegos.h"
#include "cabeceraEntidades/nominaciones.h"

#define DIM_MAX_NOMBRES 50


void abrirArchivoLimpio(char nombreArchivo[])
{
	FILE* fp;
	fp = fopen(nombreArchivo, "wb");

	if (!fp)
	{
		printf("Error, no se logro abrir el archivo.\n");
		return;
	}

	printf("El archivo se creo y/o abrio vacio.\n");

	fclose(fp);
}

void cargarArchivoConNominaciones(char nombreArchivo[])
{
	FILE* fp;
	fp = fopen(nombreArchivo, "ab");
	Nominacion nuevo = { 0 };

	int seguir = 1;

	if (!fp)
	{
		printf("No se logro abrir el archivo.\n");
		return;
	}

	while (seguir == 1)
	{
		nuevo = cargarNominacion(nuevo);

		fwrite(&nuevo, sizeof(Nominacion), 1, fp);

		printf("Desea seguir cargando Nominaciones al archivo? [s/n] \n>>> ");
		seguir = confirmar('s');
	}

	fclose(fp);
	
}
