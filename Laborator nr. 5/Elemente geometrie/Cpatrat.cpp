#include "Cpatrat.h"
Cpatrat::Cpatrat(): Cdreptunghi(0.0, 0.0, 0.0, 0.0)

{
}
Cpatrat::Cpatrat(const float& x1, const float& y1, const float& x2, const float& y2): Cdreptunghi(x1,y1,x2,y2)
{

}
Cpatrat::~Cpatrat()
{
}
float Cpatrat::getArie()
{
	return Cdreptunghi::getAria();
}
float Cpatrat::getPerimetru()
{
	return Cdreptunghi::getPerimetru();
}