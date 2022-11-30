#include "button.h"

Button::Button()
{
    this->pos = vec2(0, 0);
    this->size = vec2(10, 10);

    this->textbox = Textbox("Button", pos, size, Color(255, 255, 255));
}

Button::Button(const char* text, vec2 pos, vec2 size)
{
    this->pos = pos;
    this->size = size;

    this->textbox = Textbox(text, pos, size, Color(255, 255, 255));
}


Button::~Button()
{}

void Button::draw(SDL_Renderer* renderer)
{

}

