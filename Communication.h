/* Classe de gestion des �changes de donn�es GSM et Lora
*/
#include <GSM.h>

#ifndef DEF_COMMUNICATION
#define DEF_COMMUNICATION
class Communication
{
	private:
	SMS messSMS;
	Lora messLora;
	TCP messTCP;
	
	public:
	Communication();
	~Communication();
	void sendData(){}
	void receiveData(){};
	void chooseComm(int _nCom){};
}
#endif