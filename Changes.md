
2022:
 - 0.1.4a:
   - Added support for sprite and image rendering/drawing.
 - 0.2.0a | Codename: Seedling:
   - Added keyboard input support. 
     From a inheriated `Application` class, you can check for keys, like e.g. space button, like this: 
     ```cpp
     if (this->KeyPressed(SDLK_SPACE)) 
         square.position.y += 10;
     ```
     <br>
     Returns: Either `true` or `false` depending on pressed keys.
    - Fixed issue with SDL_Surface and sprite code, which crashed the game after close of the game.
    
    - Deleted `Size` class, replacement: `Vector2`
    
    - Updated SDL -  2. 2.24.0
  - 0.2.1a: 
    - Grass is now a library, so it could be referenced now by a C++ project.
    - Fixed some stuff with Color.
    - Added `Textbox` and `Button` classes. Will be added more functionality to them in next update. 
  - 0.2.1a.1
    - Maybe adding Scene class, so you can render multiple stuff
