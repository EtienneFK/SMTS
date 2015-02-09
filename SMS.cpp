#include "SMS.h"
#include <string>
using namespace std;
SMS::SMS(){
	string _message = NULL;
	long _numTel = 0;
}
SMS::~SMS(){
	
}
boolean SMS::checkGSMAvailability(){
	return true;
}
void SMS::sendSMS(string _message,long _numTel){
	
}
string SMS::receiveSMS(){
	return NULL;
}
int SMS::errorSMS(){
	return 0;
}