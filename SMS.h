#ifndef DEF_SMS
#define DEF_SMS

#include <GSM.h>

class SMS{
	private:
	GSM gsmAccess;
	GSM_SMS sms;
	
	
	public:
	SMS(); //Constructor
	~SMS(); //Destructor
	void sendSMS(string _message); //send a SMS
	char *receiveSMS(); //return SMS into a char*
	bool checkGSMAvailability(); //return true if the network is sufficient for sending a SMS otherwise false
	int errorSMS(); //A voir
}
#endif