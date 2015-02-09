/* Classe de gestion des échanges Lora
	Class who manage LoRa data exchange
*/
#ifndef DEF_LORA
#define DEF_LORA

#include <SX1272.h>

class Lora{
	private:
	
	public:
	Lora();//Constructor
	~Lora();//Destructor
	void sendLora(string _message); //Send data using LoRa network
	char *receiveLora(); //Return a LoRa message into a char*
	bool checkLoraAvailability(); //return true if the network is sufficient for sending a LoRa message otherwise false
	int errorLora(); //A voir
}
#endif