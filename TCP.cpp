#include "TCP.h"
#include <string>
using namespace std;
/* Constructor
*/
TCP::TCP(){ 
	string _adrServ = "http://.......";
}
/* Destructor
*/
TCP::~TCP(){
	
}
/* Send data using 3G network
*/
void TCP::sendTCP(string _message){
	
}
/* Receive data into 3G way and put in a char*
*/
char *TCP::receiveTCP(){
	return NULL;
}
/* return true if the network is sufficient to create 3G connection 
	otherwise return false
*/
bool TCP::checkTCPAvailability(){ 
	return true;
}
/* A voir
*/
int TCP::errorTCP(){
	return 0;
}
