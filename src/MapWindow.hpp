#ifndef __MAPWINDOW_HPP__
#define __MAPWINDOW_HPP__

#include "Renderer.hpp"
#include <SDL2/SDL.h>


class MapWindow : public Renderer 
{
    private:
        SDL_Texture* tileset = NULL;
    public:
        MapWindow();
        ~MapWindow();
        // Class-Methods
        void prepareWindow();
};

#endif