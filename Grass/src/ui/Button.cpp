#include "ui/Button.h"

Button::Button()
{
    this->pos = Vec2(0, 0);
    this->size = Vec2(50, 50);

    this->textbox = Textbox("Button", pos, size, Color(255, 255, 255));
}

Button::Button(const char* text, Vec2 pos, Vec2 size)
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

