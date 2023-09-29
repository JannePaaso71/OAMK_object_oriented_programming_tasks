
#include "button.h"

Button::Button()
{

}

char Button::readKeyBoard()
{
    character = getch();
    return character;
}

