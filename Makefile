
ENGINE_FILES :=	src/core/Game.cpp src/core/Input.cpp src/math/Vector2.cpp src/math/Size.cpp src/objects/entity.cpp src/utils/Color.cpp src/utils/Log.cpp

SANDBOX_FILES := sandbox/main.cpp sandbox/MyGame.cpp

all:
	g++ -Ldepends/lib -Idepends/include $(ENGINE_FILES) $(SANDBOX_FILES) -o build/game.exe -lmingw32 -lSDL2main -lSDL2


