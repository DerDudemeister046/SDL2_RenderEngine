#ifndef __MAPWINDOW_HPP__
#define __MAPWINDOW_HPP__

#include "Renderer.hpp"
#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class MapWindow : public Renderer 
{
    private:
        SDL_Texture* tileset = NULL;
        SDL_Event e;
    public:
        MapWindow();
        ~MapWindow();
        // Class-Methods
        SDL_Texture* loadImage(std::string path);
        void initWindow();
        bool updateWindow();
};

#endif