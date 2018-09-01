#include <iostream>
#include <vector>
#include "VectorMap.hpp"
#include "TileLayer.hpp"
// Includes for SDL2
#include "Renderer.hpp"


int main(int argc, char* args[])
{
    std::cout << "SDL2 Render Engine!" << std::endl;

    VectorMap vm = VectorMap(10,15,32,"Hallo");
    std::cout << "MAP_NAME:\t" << vm.getMapName() << std::endl;    
    std::vector<TileLayer> tlv = vm.returnMap();

    std::cout << "testing SDL2 with standard window" << std::endl;
    
    Renderer rndr = Renderer();
    rndr.initWindow();
        
    return 0;
}