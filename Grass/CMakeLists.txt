add_library(Grass SHARED
    src/Grass.cpp
    src/core/App.cpp
    src/core/scene.cpp
    src/objects/Box.cpp
    src/objects/Sprite.cpp
    src/stuff/funcs.cpp
    src/stuff/Vec2.cpp
    src/ui/Button.cpp
    src/ui/Textbox.cpp
)

target_include_directories(Grass PUBLIC include)


find_package(SDL2 CONFIG REQUIRED)
target_link_libraries(Grass
    PRIVATE
    $<TARGET_NAME_IF_EXISTS:SDL2::SDL2main>
    $<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>
)

find_package(SDL2_image CONFIG REQUIRED)
target_link_libraries(Grass PRIVATE $<IF:$<TARGET_EXISTS:SDL2_image::SDL2_image>,SDL2_image::SDL2_image,SDL2_image::SDL2_image-static>)

find_package(SDL2_ttf CONFIG REQUIRED)
target_link_libraries(Grass PRIVATE $<IF:$<TARGET_EXISTS:SDL2_ttf::SDL2_ttf>,SDL2_ttf::SDL2_ttf,SDL2_ttf::SDL2_ttf-static>)
