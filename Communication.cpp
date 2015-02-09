#include "Communication.h"
/* Constructor
*/
Communication::Communication(){
	sms = new SMS();
	lora = new Lora();
	tcp = new TCP();
	chkGSM = false;
	chkLora = false;
	chkTCP = false;
}
/* Destructor
*/
Communication::~Communication(){
	delete sms;
	delete lora;
	delete tcp;
}
/* Receive data a put into a char*
*/
char *Communication::receiveData(int _nComm){ 
	return NULL;
}
/* Send data into a way of communication specified
*/
void Communication::sendData(int _nComm, string _data){ // _nComm : code of way of communication (specified in config file)
	switch(_nComm){
		case 0:{ //SMS sending
			chkGSM = sms.checkGSMAvailability();//check GSM signal
			if(chkGSM = true)
				sms.sendSMS(_data);
			else{
				chkLora = lora.checkLoraAvailability();// check LoRa signal
				if(chkLora = true)
					lora.sendLora(_data);
				else {
					chkTCP = tcp.checkTCPAvailability(); //check 3G signal
					if(chkTCP = true)
					tcp.sendTCP(_data);
				}
			}
		}
		case 1:{ //LoRa sending
			chkLora = lora.checkLoraAvailability();// check LoRa signal
			if(chkLora = true)
					lora.sendLora(_data);
			else{
				chkTCP = tcp.checkTCPAvailability(); //check 3G signal
					if(chkTCP = true)
					tcp.sendTCP(_data);
				else {
					chkGSM = sms.checkGSMAvailability();//check GSM signal
					if(chkGSM = true)
					sms.sendSMS(_data);
				}
		}
		}
		case 2:{ //3G sending
			chkTCP = tcp.checkTCPAvailability(); //check 3G signal
			if(chkTCP = true)
					tcp.sendTCP(_data);
			else{
				chkLora = lora.checkLoraAvailability();// check LoRa signal
				if(chkLora = true)
					lora.sendLora(_data);
				else {
					chkGSM = sms.checkGSMAvailability();//check GSM signal
					if(chkGSM = true)
					sms.sendSMS(_data);
				}
		}
	}
}