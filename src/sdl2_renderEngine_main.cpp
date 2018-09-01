#include <iostream>
#include <vector>
#include "VectorMap.hpp"
#include "TileLayer.hpp"

int main()
{
    std::cout << "SDL2 Render Engine!" << std::endl;

    VectorMap vm = VectorMap(10,15,32,"Hallo");
    std::cout << "MAP_NAME:\t" << vm.getMapName() << std::endl;    
    std::vector<TileLayer> tlv = vm.returnMap();

    return 0;
}