#ifndef DEF_SMS
#define DEF_SMS
/*!
* \file Sms.h
* \brief Gestion des échanges de données par SMS.
		Manage SMS data exchange
* \author Etienne-Marie Fournel
* \author Florian Zebidi
* \version 0.0.1
*/
#include <LGSM.h>
/*! \class SMS
* \brief Gestion des échanges de données par SMS.
		Manage SMS data exchange.
*/
class SMS {
	public:
	/*! \brief Constructor
	*
	*	Constructor of SMS's class
	*
	*/
		SMS();
		/*! \brief Destructor
	*
	*	Destructor of SMS's class
	*
	*/
		~SMS();
		/*! \brief Send SMS 
	*	\param _data :  String Data to be sent 
	*	\return 0 if the SMS is sent otherwise return 10 when failed
	*/
		int sendSMS(string _data); 
		/*! \brief Receive one SMS 
	*	\return message into a char*
	*/
		char *receiveSMS();
		/*! \brief Give the last SMS received  
	*	\return message into a char*
	*/
		char *dernierSMS();
	}

#endif
