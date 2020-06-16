#include <stdio.h>
#include "demogorgon.h"

const int DEF_ANIMO_JUGADOR = 0;
const char DEF_NIVEL_CONFIANZA_JUGADOR = 'w';
const float DEF_FUERZA_PSIQUICA = -1.0F;


int main(){

	int animo = DEF_ANIMO_JUGADOR;
	char confianza = DEF_NIVEL_CONFIANZA_JUGADOR;
	float fuerza = DEF_FUERZA_PSIQUICA;

	comenzar_enfrentamiento();

	animo = recibir_animo();

	printf("\nAnimo recibido: %i", animo);

	confianza = recibir_confianza();

	printf("\nConfianza recibida: %c\n\n", confianza);

	fuerza = recibir_fuerza_psiquica(animo, confianza);

	printf("\nFuerza psiquica: %f\n\n", fuerza);

	resultado_enfrentamiento(fuerza);

	return 0;
}