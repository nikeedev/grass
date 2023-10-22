#include "ui/Textbox.h"

Textbox::Textbox()
{
    this->text = "Textbox";
    this->size = Vec2(5, 5);
    this->pos = Vec2(0, 0);
    this->color = Color(255, 255, 255);
}


Textbox::Textbox(const char* text, Vec2 pos, Vec2 size, Color color)
{
    this->text = text;
    this->size = size;
    this->pos = pos;
    this->color = color;

}


Textbox::~Textbox()
{
    delete text;
}

void Textbox::draw(SDL_Renderer* renderer)
{
    
}
