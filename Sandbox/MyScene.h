//#pragma once
//#include "Grass.hpp"
//
//class MyScene : public Scene
//{
//public:
//    MyScene() {
//        background_color = Color(100, 149, 237);
//    }
//
//    void Once(SDL_Renderer* renderer) override;
//    void Update(SDL_Renderer* renderer, double ts) override;
//    void Draw(SDL_Renderer* renderer) override;
//};


#pragma once
#include "Grass.hpp"

class MyScene : public Scene {
public:
    MyScene() {
        background_color = Color(100, 149, 237);
        box.position = Vec2(100, 100);
        box.size = Vec2(60, 100);
        box.color = Color(50, 205, 50);
        speed = 1.0;
    }

    void Once(SDL_Renderer* renderer) override {
        box.Draw(renderer);
        this->keyboard_state = SDL_GetKeyboardState(NULL);
    }

    void Update(SDL_Renderer* renderer, double ts) override {
        box.size.x -= speed * ts;
        box.size.y -= speed * ts;
        box.position.x += speed * ts;
        box.position.y += speed * ts;

        if (box.size.x <= 0 || box.size.y <= 0) {
            box.size.x = 60;
            box.size.y = 100;
        }
    }

    void Draw(SDL_Renderer* renderer) override {
        box.Draw(renderer);
    }

private:
    Box box;
    double speed;
};
