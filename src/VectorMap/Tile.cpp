#include "Tile.hpp"

Tile::Tile()
{
    tileID = 0;
    tileSize = 32;
    tileType = 0;
    tilePass = true;
}

Tile::Tile(int id, int size, int type, bool pass)
{
    tileID = id;
    tileSize = size;
    tileType = type;
    tilePass = pass;
}

Tile::~Tile()
{

}

// GET-Methods

int Tile::getTileID()
{
    return tileID;
}

int Tile::getTileSize()
{
    return tileSize;
}

int Tile::getTileType()
{
    return tileType;
}

bool Tile::getTilePass()
{
    return tilePass;
} 

// SET-Methods

void Tile::setTileID(int id)
{
    tileID = id;
}

void Tile::setTileSize(int size)
{
    tileSize = size;
}

void Tile::setTileType(int type)
{
    tileType = type;
}

void Tile::setTilePass(bool pass)
{
    tilePass = pass;
}