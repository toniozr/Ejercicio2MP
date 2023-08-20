#pragma once

class Hora
{
public:

	//Default constructor
		//	If you don't provide explicit initial values for your member
		//	variables in the constructor's member initializer list, they will
		//	be initialized to their default values based on their types. For
		//	primitive types like int, the default value is 0.
	Hora() : m_hora(), m_minuts(), m_segons() {}

	//Constructor with parameters
	Hora(int hora, int minuts, int segons) : m_hora(hora), m_minuts(minuts), m_segons(segons) {}

	//Copy constructor
	Hora(const Hora& obj) : m_hora(obj.m_hora), m_minuts(obj.m_minuts), m_segons(obj.m_segons) {}

	//Getters
	int getHora() { return m_hora; }
	int getMinut() { return m_minuts; }
	int getSegons() { return m_segons; }

	//Setters

	void setHora(int hora) { m_hora = hora; }
	void setMinuts(int minuts) { m_minuts = minuts; }
	void setSegons(int segons) { m_segons = segons; }


private:
	int m_hora;
	int m_minuts;
	int m_segons;

};
