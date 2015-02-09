#ifndef DEF_LORA
#define DEF_LORA

class Lora{
	
	public:
	Lora();
	~Lora();
	void sendLora(string _message);
	bool checkLoraAvailability();
	string receiveLora();
	int errorLora();
}
#endif