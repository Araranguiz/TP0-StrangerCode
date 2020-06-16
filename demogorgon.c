#include "demogorgon.h"

void comenzar_enfrentamiento(){
	printf("\n\nEl enfrentamiento esta por comenzar!\n\n");
}


int recibir_animo(){
 	
	int animo_recibido = 0;

	do
    {
	    printf("Ingrese el animo de El(Eleven) en un rango del 1 al 100 inclusive:\n");
		scanf("%i", &animo_recibido);

		if( (animo_recibido < 1) || (animo_recibido > 100) ){
			printf("INGRESO NO VALIDO!\n");
		}else{
			printf("Ingreso aceptado!\n\n");
		}
    }
    while( (animo_recibido < 1) || (animo_recibido > 100) );

	return animo_recibido;
}


char recibir_confianza(){
	char confianza_recibida = 'w';

	do
    {
	    printf("Ingrese el nivel de confianza que tiene El(Eleven) con sus amigos\nBajo [b] - Medio [m] - Alto [a]\n");
		scanf(" %c", &confianza_recibida);

		if( (confianza_recibida == 'b' ) || (confianza_recibida == 'm') || (confianza_recibida == 'a') ){
			printf("Ingreso de nivel de confianza correcto!\n\n");
		}else{
			printf("\nINGRESO NO VALIDO!\n\n");
		}
    }
    while( (confianza_recibida != 'b' ) && (confianza_recibida != 'm') && (confianza_recibida != 'a') );

	return confianza_recibida;

}


float recibir_fuerza_psiquica(int animo_recibido, char confianza_recibida){
	float multiplicador = 0.0F;
	float fuerza_psiquica = -0.1F;

	switch(confianza_recibida){
		case 'b':
			multiplicador = 0.7F;
			break;
		case 'm':
			multiplicador = 1.3F;
			break;
		default:
			multiplicador = 3.7F;
	}

	fuerza_psiquica = animo_recibido * multiplicador;

	return fuerza_psiquica;
}

void resultado_enfrentamiento(float fuerza_psiquica){
	if(fuerza_psiquica < 65.0F){
		printf("\n\n\n\n\tEleven enfrento al Demogorgon pero no parecia que lo pudiera vencer\n\thasta que una luz cubrio todo el lugar desapareciendo al Demogorgon junto a Eleven\n\n\tFin.. ?\n\n");
	}else if(fuerza_psiquica >= 65.0F && fuerza_psiquica <= 67.0F){
		printf("\n\n\n\n\tEleven conto con la fuerza psiquica justa para poder vencer al Demogorgon\n\tpor lo que quedo realmente debil luego del enfrentamiento!\n\n\n");
	}else{
		printf("\n\n\n\n\tEleven conto con su mayor animo y con la confianza de sus amigos\n\tpor lo que logro vencer al Demogorgon con su fuerza psquica!!!\n\n\n\t \n");
	}
}