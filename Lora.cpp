#include "Lora.h"
#include <string>
using namespace std;
Lora::Lora(){ //Constructor
	
}
Lora::~Lora(){ //Destructor
	
}
void Lora::sendLora(string _message){ //Send data using LoRa network
	
}
string Lora::receiveLora(){ //Return a LoRa message into a char*
	return NULL;
}

bool Lora::checkLoraAvailability(){ //return true if the network is sufficient for sending a LoRa message otherwise false
	return true;
}
int Lora::errorLora(){ //A voir
	return 0;
}