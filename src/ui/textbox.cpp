#include "textbox.h"

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
