#include "Renderer.hpp"

Renderer::Renderer()
{
}

Renderer::~Renderer()
{

}
// GET-Methods
int Renderer::getScreenWidth()
{
    return scrW;
}

int Renderer::getScreenHeight()
{
    return scrH;
}
// SET-Methods
void Renderer::setScreenWidth(int scrW)
{
    this->scrW = scrW;
}

void Renderer::setScreenHeight(int scrH)
{
    this->scrH = scrH;
}
// Class-Functions
void Renderer::initWindow()
{
    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow("SDL_Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, getScreenWidth(), getScreenHeight(), SDL_WINDOW_SHOWN);
    screenSurface = SDL_GetWindowSurface(window);
    SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
    SDL_UpdateWindowSurface(window);
    SDL_Delay(2000);
}