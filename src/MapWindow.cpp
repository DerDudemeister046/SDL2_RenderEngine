#include "MapWindow.hpp"

MapWindow::MapWindow()
{
    int imgFlags = IMG_INIT_PNG;
    IMG_Init(imgFlags);
    initWindow();
}

MapWindow::MapWindow(SDL_Texture* tileset, VectorMap map)
{
    
}

MapWindow::~MapWindow()
{}

void MapWindow::initWindow()
{
    Renderer::initWindow();
    tileset = loadImage("./resources/dummy_tileset.png");
}

SDL_Texture* MapWindow::loadImage(std::string path)
{
    SDL_Texture* ntex = NULL;
    SDL_Surface* lsfc = IMG_Load(path.c_str());
    ntex = SDL_CreateTextureFromSurface(getRenderer(), lsfc);
    SDL_FreeSurface(lsfc);
    return ntex;
}

bool MapWindow::updateWindow()
{
    bool quit = false;
    while(!quit)
    {
        while(SDL_PollEvent(&e) != 0)
        {
            if(e.type == SDL_QUIT)
            {
                quit = true;
            }
        }

        SDL_RenderClear(Renderer::getRenderer());
        SDL_RenderCopy(Renderer::getRenderer(),tileset,NULL,NULL);
        SDL_RenderPresent(Renderer::getRenderer());
    }
    return quit;    
}