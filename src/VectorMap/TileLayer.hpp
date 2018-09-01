/*
    Author:     Andi Amzoll
    Date:       01.09.2018
    Last_Edit:  01.09.2018
    Version:    0.1a

    Description:

    Version: 0.1a
    This class creates a layer in X- and Y-Direction and stores information in a vector.
*/
#ifndef __TILELAYER_HPP__
#define __TILELAYER_HPP__

#include "Tile.hpp"
#include <vector>
#include <iostream>

class TileLayer 
{
    private:
    int layerID;                    // defines the ID of the layer
    int layerSizeX;                 // defines width of the layer
    int layerSizeY;                 // defines height of the layer
    std::vector<Tile> layer;        // A vector of tiles, defining the Layer.
    public:
    TileLayer();
    TileLayer(int id, int sizeX, int sizeY); 
    ~TileLayer();
    // GET-Methoden
    int getLayerID();
    int getLayerSizeX();
    int getLayerSizeY();
    // SET-Methoden
    void setLayerID(int id);
    void setLayerSizeX(int sizeX);
    void setLayerSizeY(int sizeY);
    // Class-Functions
    void initLayer(int tileSize);
};
#endif