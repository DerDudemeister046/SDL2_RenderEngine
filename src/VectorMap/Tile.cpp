#include "Tile.hpp"

Tile::Tile()
{
    tileID = 0;
    tileType = 0;
    tilePass = true;
}

Tile::Tile(int id, int type, bool pass)
{
    tileID = id;
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

void Tile::setTileType(int type)
{
    tileType = type;
}

void Tile::setTilePass(bool pass)
{
    tilePass = pass;
}