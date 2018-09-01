#ifndef __RENDEDER_HPP__
#define __RENDERER_HPP__

#include <SDL2/SDL.h>

class Renderer 
{
    private:
    int scrW = 1024;
    int scrH = 786;
    SDL_Window* window = NULL;
    SDL_Renderer* grendr = NULL;
    SDL_Event e;
    public:
    Renderer();
    ~Renderer();
    // GET-Methods
    int getScreenWidth();
    int getScreenHeight();
    // SET-Methods
    void setScreenWidth(int scrW);
    void setScreenHeight(int scrH);
    // Class-Functions
    void initWindow();
    bool updateWindow();
    void closeWindow();
};

#endif // __RENDERER_HPP__