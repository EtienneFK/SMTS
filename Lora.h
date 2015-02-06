#ifndef DEF_LORA
#define DEF_LORA

class Lora{
	
	public:
	Lora();
	~Lora();
	void sendLora(string _message);
	string receiveLora();
	int errorLora();
}
#endif