#include "Hora.h"

bool Hora::horaValida()
{
	return 0 <= m_hora && m_hora <= 23 && 0 <= m_minuts && m_minuts <= 59 &&
		   0 <= m_segons && m_segons <= 59;
}


Hora Hora::operator+(int segons)
{
	Hora resultant = *this;

	resultant.m_segons += segons;
	resultant.m_minuts += resultant.m_segons / 60;
	resultant.m_segons %= 60;
	resultant.m_hora += resultant.m_minuts / 60;
	resultant.m_minuts %= 60;
	resultant.m_hora %= 24;

	return resultant;
}


Hora Hora::operator+(const Hora& obj)
{

	Hora resultant = obj;

	resultant.m_segons += m_segons;
	resultant.m_minuts += (resultant.m_segons / 60 + m_minuts);
	resultant.m_segons %= 60;
	resultant.m_hora += (resultant.m_minuts / 60 + m_hora);
	resultant.m_minuts %= 60;
	resultant.m_hora %= 24;

	return resultant;

}

bool Hora::operator==(const Hora& obj)
{
	return obj.m_hora == this->m_hora && obj.m_minuts == this->m_minuts && obj.m_segons == this->m_segons;
}

bool Hora::operator<(const Hora& obj)
{
	if(this->m_hora < obj.m_hora)
		return true;

	else if(this->m_hora > obj.m_hora)
		return false;

	if(this->m_minuts < obj.m_minuts)
		return true;

	else if(this->m_minuts > obj.m_minuts)
		return false;

	return this->m_segons < obj.m_segons;

}

Hora& Hora::operator=(const Hora& obj)
{
	if(this == &obj)
		return *this;

	this->m_hora = obj.m_hora;
	this->m_minuts = obj.m_minuts;
	this->m_segons = obj.m_segons;

	return *this;
}
















