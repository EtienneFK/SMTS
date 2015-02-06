#include "SMS.h"
#include <string>
using namespace std;
SMS::SMS(){
	string _message = NULL;
	
}
SMS::~SMS(){
	
}
boolean SMS::checkGSMAvailability(){
	return TRUE;
}
void SMS::sendSMS(string _message){
	
}
string SMS::receiveSMS(){
	return NULL;
}
int SMS::errorSMS(){
	return 0;
}