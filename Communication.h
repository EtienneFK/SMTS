/* Classe de gestion des échanges de données GSM et Lora
*/
#include <GSM.h>

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
	Communication();
	~Communication();
	char *receiveData(int _nComm){};
	void sendData(int _nComm, string _data){};
}
#endif