ENGINE_FILES := src/*.cpp

# src/core/app.cpp src/math/vec2.cpp src/objects/box.cpp src/objects/sprite.cpp src/utils/color.cpp src/utils/log.cpp

SANDBOX_FILES := sandbox/main.cpp sandbox/MyGame.cpp

CC_FLAGS := -Wall -std=c++20

game:
	clang++ -Ldepends/SDL2-mingw/lib -Idepends/SDL2-mingw/include $(ENGINE_FILES) $(SANDBOX_FILES) -o build/mingw/game.exe $(CC_FLAGS) -lmingw32 -lSDL2main -lSDL2 -lSDL2_image
