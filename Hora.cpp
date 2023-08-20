#include "Hora.h"

bool Hora::horaValida()
{
	return 0 <= m_hora && m_hora <= 23 && 0 <= m_minuts && m_minuts <= 59 &&
		   0 <= m_segons && m_segons <= 59;
}
