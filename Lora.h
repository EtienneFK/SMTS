/* Classe de gestion des échanges Lora
	Class who manage LoRa data exchange
*/
#ifndef DEF_LORA
#define DEF_LORA
/*!
* \file Lora.h
* \brief Gestion des échanges de données via le réseau LoRa.
		Manage SMS data exchange
* \author Etienne-Marie Fournel
* \author Florian Zebidi
* \version 0.0.1
*/
#include <SX1272.h>

class Lora{
	private:
	
	public:
	Lora();//Constructor
	~Lora();//Destructor
	void sendLora(string _message); //Send data using LoRa network
	char *receiveLora(); //Return a LoRa message into a char*
}
#endif