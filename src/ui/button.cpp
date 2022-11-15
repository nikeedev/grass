#include "button.h"

Button::Button()
{
    this->size = vec2(10, 10);
    this->pos = vec2(0, 0);

    this->textbox = Textbox("Button", size, pos, Color(255, 255, 255));
}

Button::Button(const char* text, vec2 size, vec2 pos)
{
    this->size = size;
    this->pos = pos;

    this->textbox = Textbox(text, size, pos, Color(255, 255, 255));
}


Button::~Button()
{}

void Button::draw(SDL_Renderer* renderer)
{

}
