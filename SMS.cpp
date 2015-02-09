#include "SMS.h"
#include <string>
using namespace std;
SMS::SMS(){ //Constructor
	string _message = NULL;
	char _numTel[10];
}
SMS::~SMS(){ //Destructor
}
void SMS::sendSMS(string _message){ //send a SMS
	while(!LSMS.ready()){
		delay(1000);
	}
	LSMS.beginSMS(_numtel);
	LSMS.print(_message);
	LSMS.endSMS()
}
char *SMS::receiveSMS(){ //return SMS into a char*

	while(!LSMS.ready()){
		delay(1000);
	}
	char _buf[10];
	LSMS.remoteNumber(_buf,10); //Number stored
	if(strcmp(_buf,_numTel)=0){ //Verify if the number is allowed for communicate with the device
		char _message[50]; //Message received
		int c; //Chars of SMS
		int n; //Increment
		while(true){
			c = LSMS.read(); //Message content (one byte at a time)
			
			if(c<0)
				break; //End of message content
		}
		
	}
	
	return NULL;
}
boolean SMS::checkGSMAvailability(){ //return true if the network is sufficient for sending a SMS otherwise false
	return true;
}
int SMS::errorSMS(){ //A voir
	return 0;
}