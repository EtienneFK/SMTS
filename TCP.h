#ifndef DEF_TCP
#define DEF_TCP

class TCP{
	private:
	string _adrServ;
	
	public:
	TCP();
	~TCP();
	void sendTCP(string _message);
	string receiveTCP();
	bool checkTCPAvailability();
	
}
#endif