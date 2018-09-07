#include "TileLayer.hpp"

TileLayer::TileLayer()
{
    layerID = 0;
}

TileLayer::TileLayer(int id)
{
    layerID = id;
}

TileLayer::~TileLayer()
{

}

// GET-Methods
int TileLayer::getLayerID()
{
    return layerID;
}

// SET-Methods
void TileLayer::setLayerID(int id)
{
    layerID = id;
}

// Class-Functions
void TileLayer::initLayer(int sizeX, int sizeY)
{
    int counter = 0; // Counts tiles, sets IDs to Tiles
    int vectorSize = sizeX * sizeY; // get length of Vector to have place for all elements
    layer.resize(vectorSize);
    // Fill vector with default tiles
    for (int i=0; i<sizeX; i++)
    {
        for (int j=0; j<sizeY; j++)
        {
            layer.at(counter).setTileID(counter);
            layer.at(counter).setTileType(0);
            layer.at(counter).setTilePass(true);
            counter++;
        }
    }
}