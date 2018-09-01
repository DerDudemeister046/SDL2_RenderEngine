/*
    Author:     Andi Amzoll
    Date:       01.09.2018
    Last_Edit:  01.09.2018
    Version:    0.1a

    Description:

    Version: 0.1a
    This class defines the basic attributes for a tile.
*/
#ifndef __TILE_HPP__
#define __TILE_HPP__

class Tile 
{
    private:
        int tileID;     // Identifies Tile in Vector
        int tileSize;   // Tile is always a square
        int tileType;  // defines the Type e.g. gras, stone, water etc.
        bool tilePass;  // defines the passability of the tile
    public:
        Tile();
        Tile(int id, int size, int type, bool pass);
        ~Tile();
        // GET-Methods
        int getTileID();
        int getTileSize();
        int getTileType();
        bool getTilePass();
        // SET-Methods
        void setTileID(int id);
        void setTileSize(int size);
        void setTileType(int type);
        void setTilePass(bool pass);
};
#endif