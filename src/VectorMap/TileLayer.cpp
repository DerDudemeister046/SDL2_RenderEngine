#include "TileLayer.hpp"

TileLayer::TileLayer()
{
    layerID = 0;
    layerSizeX = 10;
    layerSizeY = 15;
}

TileLayer::TileLayer(int id, int sizeX, int sizeY)
{
    layerID = id;
    layerSizeX = sizeX;
    layerSizeY = sizeY;
}

TileLayer::~TileLayer()
{

}

// GET-Methods
int TileLayer::getLayerID()
{
    return layerID;
}

int TileLayer::getLayerSizeX()
{
    return layerSizeX;
}

int TileLayer::getLayerSizeY()
{
    return layerSizeY;
}

// SET-Methods
void TileLayer::setLayerID(int id)
{
    layerID = id;
}

void TileLayer::setLayerSizeX(int sizeX)
{
    layerSizeX = sizeX;
}

void TileLayer::setLayerSizeY(int sizeY)
{
    layerSizeY = sizeY;
}

// Class-Functions
void TileLayer::initLayer()
{
    int counter = 0; // Counts tiles, sets IDs to Tiles
    int vectorSize = getLayerSizeX() * getLayerSizeY(); // get length of Vector to have place for all elements
    layer.resize(vectorSize);

    for (int i=0; i<getLayerSizeX(); i++)
    {
        for (int j=0; j<getLayerSizeY(); j++)
        {
            layer.at(counter).setTileID(counter);
            layer.at(counter).setTileType(0);
            layer.at(counter).setTilePass(true);
            counter++;
        }
    }

}