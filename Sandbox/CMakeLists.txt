add_executable(Sandbox main.cpp MyGame.cpp)
target_include_directories(Sandbox PRIVATE MyGame.h)
target_link_libraries(Sandbox PRIVATE Grass)