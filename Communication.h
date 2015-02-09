/* Classe de gestion des échanges de données
	Class who manage differents way for data exchange
*/
#include "SMS.h"
#include "Lora.h"
#include "TCP.h"

#ifndef DEF_COMMUNICATION
#define DEF_COMMUNICATION
class Communication
{
	private:
	SMS sms;
	Lora lora;
	TCP tcp;
	bool chkSMS;
	bool chkLora;
	bool chkTCP;
	
	public:
	Communication(); //Constructor
	~Communication(); //Destructor
	char *receiveData(int _nComm){}; //Receive data a put into a char*
	void sendData(int _nComm, string _data){};//Send data into a way of communication specified
}
#endif