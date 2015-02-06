#ifndef DEF_SMS
#define DEF_SMS

#include <GSM.h>

class SMS{
	private:
	GSM gsmAccess;
	GSM_SMS sms;
	
	
	public:
	SMS();
	~SMS();
	boolean checkGSMAvailability();
	void sendSMS(string _message);
	string receiveSMS();
	int errorSMS();
}
#endif