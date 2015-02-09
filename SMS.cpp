#include "SMS.h"
#include <string>
using namespace std;
/* Constructor
*/
SMS::SMS(){ 
	string _message = NULL;
	char _numTel[10];
}
/* Destructor
*/
SMS::~SMS(){ 
}
/* Send a SMS
*/
void SMS::sendSMS(string _message){
	while(!LSMS.ready()){
		delay(1000);
	}
	LSMS.beginSMS(_numtel);
	LSMS.print(_message);
	LSMS.endSMS()
}
/* Return SMS into a char*
*/
char *SMS::receiveSMS(){

	while(!LSMS.ready()){
		delay(1000);
	}
	char _buf[10];
	if(LSMS.available()){
		
	LSMS.remoteNumber(_buf,10); 					//Number stored
		if(strcmp(_buf,_numTel)=0){ 				//Verify if the number is allowed to communicate with the device
			char _message[50]; 						//Message received
			int c; 									//Chars of SMS
			int n; 									//Increment
			while(true){
			c = LSMS.read(); 						//Message content (one byte at a time)
			
			if(c<0)
				break; 								//End of message content
			}
		
			LSMS.flush();							//Delete message
			}
		
	}
	
	return NULL;
}
/* Return true if the network is sufficient for sending a SMS otherwise false
*/
boolean SMS::checkGSMAvailability(){
	return true;
}
/* A voir
*/
int SMS::errorSMS(){
	return 0;
}