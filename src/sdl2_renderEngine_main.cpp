#include <iostream>
#include <vector>
#include "VectorMap.hpp"
#include "TileLayer.hpp"
#include "MapWindow.hpp"


int main(int argc, char* args[])
{
   
    MapWindow mw = MapWindow();

    bool quit = false;

    while(!quit)
    {
        mw.updateWindow();
    }   

    std::cout << "Exit now." << std::endl;
    return 0;
}