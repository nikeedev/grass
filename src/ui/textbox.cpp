#include "text.h"

Textbox::TextBox(const& char* text, vec2 size, vec2 pos, Color* color(255, 255, 255, 255))
{
    this->text = text;
    this->size = size;
    this->pos = pos;
    this->color = color;


}


TextBox::TextBox()
{}

void TextBox::draw(SDL_Renderer* renderer)
{
    
}
