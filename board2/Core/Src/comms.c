#include <radio.h>
#include <sx126x.h>
#include "comms.h"
//#include "sx126x-hal.h"

void configuration(void){
	//i) Initialize power in the antenna and the transceiver => OBC??????????????
	if( SX126xGetOperatingMode() != MODE_STDBY_RC ) //ii) If we are not in standby, change state to standby
	{
		SX126xSetStandby(MODE_STDBY_RC);
	}
	SX126xSetPacketType(PACKET_TYPE_LORA); 	 //iii) Set the packet type to LoRa
	SX126xSetRfFrequency(RF_FREQUENCY); //iv) Set the RF frequency
	//SX126xSetPaConfig(0x04, 0x07, 0x00, 0x01); // Optimal config. for SX1262 at 22 dBm. No fa falta crec, es fa dins de SetTxParams
	//SX126xSetPaSelect(); dins de SetTxParams hi ha un if que depen d'aixo, pero no trobo aquesta funció a cap lloc
	SX126xSetTxParams(TX_OUTPUT_POWER, RADIO_RAMP_200_US); //v) Set SX1262 TX parameters (power, ramp time) -- RAMP TIME he posat el que hi ha a radio.c, no tinc ni idea de si cal canviar-ho
	SX126xSetBufferBaseAddress(0x00,0x88); //vi) Set buffer address (Tx and Rx)
	//JURARIA QUE A PARTIR D'AQUI YA ANEM A LES tx_function, rx_function, etc.
};

void tx_function(void){
	configuration();
	packaging(); //Start the TX by packaging all the data that will be transmitted
	//SX126xSetPayload(); //Aquesta fa el writebuffer, sha de posar direccions com a la pag 48 del datasheet
	//SX126xSetModulationParams(); //passa dins de (...) un struct?? Ni idea de com va aixo
	//SX126xSetPacketParams(); //Mateix problema que a dalt, tocara investigar
};

void rx_function(void){


};

void packaging(void){


};

