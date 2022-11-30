#include "textbox.h"

Textbox::Textbox()
{
    this->text = (char*)"Textbox";
    this->size = vec2(5, 5);
    this->pos = vec2(0, 0);
    this->color = Color(255, 255, 255);
}


Textbox::Textbox(const char* text, vec2 pos, vec2 size, Color& color)
{
    this->text = (char*)text;
    this->size = size;
    this->pos = pos;
    this->color = color;

}


Textbox::~Textbox()
{}

void Textbox::draw(SDL_Renderer* renderer)
{
    
}
