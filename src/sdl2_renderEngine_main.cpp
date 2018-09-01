#include <iostream>
#include "./VectorMap/TileLayer.hpp"

int main()
{
    std::cout << "SDL2 Render Engin!" << std::endl;

    TileLayer tl = TileLayer(0,8,6);    
    tl.initLayer(32);

    return 0;
}