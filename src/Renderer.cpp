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
    grendr = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    SDL_SetRenderDrawColor(grendr, 0xFF, 0xFF, 0xFF, 0xFF);
}

void Renderer::updateWindow()
{
    SDL_UpdateWindowSurface(window);
}

void Renderer::closeWindow()
{
    SDL_DestroyRenderer(grendr);
    SDL_DestroyWindow(window);
    window = NULL;
    grendr = NULL;
    SDL_Quit();
}