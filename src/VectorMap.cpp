#include "VectorMap.hpp"

VectorMap::VectorMap()
{
    mapSizeX = 10;
    mapSizeY = 15;
    tileSize = 32;
    mapName = "Test";
    initMap();
}

VectorMap::VectorMap(int sizeX, int sizeY, int sizeT, std::string name)
{
    mapSizeX = sizeX;
    mapSizeY = sizeY;
    tileSize = sizeT;
    mapName = name;
    initMap();
}

VectorMap::~VectorMap()
{

}

// GET-Methods
int VectorMap::getMapSizeX()
{
    return mapSizeX;
}

int VectorMap::getMapSizeY()
{
    return mapSizeY;
}

int VectorMap::getTileSize()
{
    return tileSize;
}

std::string VectorMap::getMapName()
{
    return mapName;
}

// SET-Methods
void VectorMap::setMapSizeX(int sizeX)
{
    mapSizeX = sizeX;
}

void VectorMap::setMapSizeY(int sizeY)
{
    mapSizeY = sizeY;
}

void VectorMap::setTileSize(int sizeT)
{
    tileSize = sizeT;
}

void VectorMap::setMapName(std::string name)
{
    mapName = name;
}

// Class-Functions
void VectorMap::initMap()
{
    map.resize(1);
    //map.at(0).initLayer(getMapSizeX(), getMapSizeY());
    map.at(0).initLayer(getMapSizeX(), getMapSizeY());
}

std::vector<TileLayer>& VectorMap::returnMap()
{
    return map;
}