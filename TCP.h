#ifndef DEF_TCP
#define DEF_TCP

class TCP{
	private:
	string _adrServ;
	
	public:
	TCP(); //Constructor
	~TCP(); //Destructor
	void sendTCP(string _message); //Send data using 3G network
	char *receiveTCP(); //Receive data into 3G way and put in a char*
	bool checkTCPAvailability(); //return true if the network is sufficient to create 3G connection otherwise false
	int errorTCP(); //A voir
	
}
#endif