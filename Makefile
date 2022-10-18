
ENGINE_FILES :=	src/core/Game.cpp src/core/Input.cpp src/math/Vector2.cpp src/math/Size.cpp src/objects/Box.cpp src/objects/Sprite.cpp src/utils/Color.cpp src/utils/Log.cpp

SANDBOX_FILES := sandbox/main.cpp sandbox/MyGame.cpp

CC_FLAGS := -Wall 


all:
    clang++ -Ldepends/SDL2-mingw/lib -Idepends/SDL2-mingw/include $(ENGINE_FILES) $(SANDBOX_FILES) -o build/mingw/game.exe $(CC_FLAGS) -lmingw32 -lSDL2main -lSDL2 -lSDL2_image


