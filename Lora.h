#ifndef DEF_LORA
#define DEF_LORA

#include <SX1272.h>

class Lora{
	private:
	
	public:
	Lora();
	~Lora();
	void sendLora(string _message);
	bool checkLoraAvailability();
	string receiveLora();
	int errorLora();
}
#endif