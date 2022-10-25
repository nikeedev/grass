ENGINE_FILES :=	src/core/Application.cpp src/math/Vector2.cpp src/objects/Box.cpp src/objects/Sprite.cpp src/utils/Color.cpp src/utils/Log.cpp

SANDBOX_FILES := sandbox/main.cpp sandbox/MyGame.cpp

CC_FLAGS := -Wall -std=c++20

game:
	clang++ -Ldepends/SDL2-mingw/lib -Idepends/SDL2-mingw/include $(ENGINE_FILES) $(SANDBOX_FILES) -o build/mingw/game.exe $(CC_FLAGS) -lmingw32 -lSDL2main -lSDL2 -lSDL2_image
