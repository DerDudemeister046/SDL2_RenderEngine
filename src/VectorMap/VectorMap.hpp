/*
    Author:     Andi Amzoll
    Date:       01.09.2018
    Last_Edit:  01.09.2018
    Version:    0.1a

    Description:

    Version: 0.1a
    This Class creates the Map, wich is just a vector of TileLayers. It will always start with a layercount of 1.
*/
#ifndef __VECTORMAP_HPP__
#define __VECTORMAP_HPP__

#include "TileLayer.hpp"
#include <vector>
#include <string>

class VectorMap 
{
    private:
    int mapSizeX;   // defines width of map in tiles
    int mapSizeY;   // defines height of map in tiles
    int tileSize;   // defines sizes of tiles in map
    std::string mapName;
    std::vector<TileLayer> map;
    public:
    VectorMap();
    VectorMap(int sizeX, int sizeY, int sizeT, std::string name);
    ~VectorMap();
    // GET-Methods
    int getMapSizeX();
    int getMapSizeY();
    int getTileSize();
    std::string getMapName();
    // SET-Methods
    void setMapSizeX(int sizeX);
    void setMapSizeY(int sizeY);
    void setTileSize(int sizeT);
    void setMapName(std::string name);
    // Class-Functions
    void initMap();
    std::vector<TileLayer>& returnMap();
};

#endif