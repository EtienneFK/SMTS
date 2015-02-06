#include "Communication.h"

Communication::Communication(){
		sms = new SMS();
	lora = new Lora();
	tcp = new TCP();
}
Communication::~Communication(){
	delete sms;
	delete lora;
	delete tcp;
}
void Communication::sendData(){

}
string Communication::receiveData(){
	return NULL;
}
void Communication::chooseComm(int _nComm){
	switch(_nComm){
		case 0:{
			
		}
		case 1:{
			
		}
		case 2:{
			
		}
	}
}