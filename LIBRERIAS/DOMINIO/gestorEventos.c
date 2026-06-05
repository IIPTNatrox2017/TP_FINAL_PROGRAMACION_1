#define _CRT_SECURE_NO_WARNINGS

#include "gestorEventos.h"
#include "../Librerias Externas/scanner.h"
#include <stdio.h>

typedef struct	stPuntaje
{
	float valorPuntaje;
	int esValido;
} Puntaje;

typedef struct stFechaLanzamiento
{
	int dia;
	int mes;
	int anio;
	int esValido;
} FechaLanzamiento;

typedef struct stJuego
{
	int idJuego;
	char nombre[50];
	char estudio[50];
	char genero[50];
} Juego;

typedef struct stCategoria
{
	int idCategoria;
	char nombre[50];
} Categoria;

typedef struct stNominacion
{
	int idNominacion;
	Categoria categoria;
	Juego juego;
	Puntaje puntaje;
	FechaLanzamiento fecha;
}Nominacion;

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

void cargarArchivoConNominaciones()
{

}

Nominacion cargarNuevaNominacion(Nominacion aux)
{
	
}