#include "textbox.h"

Textbox::Textbox()
{
    this->text = "Textbox";
    this->size = vec2(5, 5);
    this->pos = vec2(0, 0);
    this->color = Color(255, 255, 255);
}


Textbox::Textbox(const char* text, vec2 size, vec2 pos, Color& color)
{
    this->text = text;
    this->size = size;
    this->pos = pos;
    this->color = color;

}


Textbox::~Textbox()
{}

void Textbox::draw(SDL_Renderer* renderer)
{
    
}
