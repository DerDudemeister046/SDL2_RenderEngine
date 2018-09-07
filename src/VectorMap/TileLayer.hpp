/*
    Author:     Andi Amzoll
    Date:       01.09.2018
    Last_Edit:  01.09.2018
    Version:    0.2a

    Description:

    Version: 0.2a
    deleted attributes layerSizeX and layerSizeY, are defined in Vectormap anyway.

    Version: 0.1a
    This class creates a layer in X- and Y-Direction and stores information in a vector.
*/
#ifndef __TILELAYER_HPP__
#define __TILELAYER_HPP__

#include "Tile.hpp"
#include <vector>

class TileLayer 
{
    private:
    int layerID;                    // defines the ID of the layer
    std::vector<Tile> layer;        // A vector of tiles, defining the Layer.
    public:
    TileLayer();
    TileLayer(int id); 
    ~TileLayer();
    // GET-Methoden
    int getLayerID();
    // SET-Methoden
    void setLayerID(int id);
    // Class-Functions
    void initLayer(int sizeX, int sizeY);
};
#endif