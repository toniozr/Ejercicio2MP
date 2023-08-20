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
