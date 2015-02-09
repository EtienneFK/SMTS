#ifndef DEF_COMMUNICATION
#define DEF_COMMUNICATION
/*!
* \file Communication.h
* \brief Gestion des échanges de données.
		Manage differents way for data exchange
* \author Etienne-Marie Fournel
* \author Florian Zebidi
* \version 0.0.1
*/
#include "SMS.h"
#include "Lora.h"
#include "TCP.h"
/*! \class Communication
* \brief Classe de gestion des échanges de données
	Class who manage differents way for data exchange
*
*
*/
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