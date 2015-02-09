/* Classe de gestion des échanges 3G
	Class who manage 3G data exchange
*/
#ifndef DEF_TCP
#define DEF_TCP
#define URL_SERV "http://......"

#include <LGPRS.h>
#include <LGPRSClient.h>
class TCP{
	public:
	TCP(); //Constructor
	~TCP(); //Destructor
	void sendTCP(string _message); //Send data using 3G network
	char *receiveTCP(); //Receive data into 3G way and put in a char*
	bool checkTCPAvailability(); //return true if the network is sufficient to create 3G connection otherwise false
	int errorTCP(); //A voir
	
}
#endif