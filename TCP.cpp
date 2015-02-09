#include "TCP.h"
#include <string>
using namespace std;
TCP::TCP(){ //Constructor
	string _adrServ = "http://.......";
}
TCP::~TCP(){ //Destructor
	
}
void TCP::sendTCP(string _message){ //Send data using 3G network
	
}
char *TCP::receiveTCP(){ //Receive data into 3G way and put in a char*
	return NULL;
}
bool TCP::checkTCPAvailability(){ //return true if the network is sufficient to create 3G connection otherwise false
	return true;
}
int TCP::errorTCP(){ //A voir
	return 0;
}
