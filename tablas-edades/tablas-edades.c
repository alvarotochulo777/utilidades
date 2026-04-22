#include "./utilidades/utilidades.h"
#include "./utilidades/utilidades.c"

int main (void)
{
	int valorSO = 0;
	
	int edadaux;    // Variable provisional para pedir las edades.
	int npersonas;  // Total de personas registradas.
	
	int suma = 0;       // Suma de las edades antes de hacer la media.
	
	// float media;    // Resultado con la media calculada.
	
	npersonas = pedirEnteroPositivo("¿Cuántas personas contabilizar", 5, TRUE);
	
	if (npersonas == 0)
	{
		mostrar("No puedo calcular medias si no existen datos.");
	}
	else
	{
		int edad[npersonas];
		
		for(int i=0 ; i<npersonas ; i++)
		{
			// Pedir una edad.
			edadaux = pedirEntero("Dame la edad", 5);
			
			// Acumular edades sumándolas.
			suma = suma + edadaux;
		}
		
		mostrar("Los años sumados son ");
		printf("%d", suma);
		
		NUEVALINEA;
	}
	
	return valorSO;
}
