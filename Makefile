PRJNME=SDL_RenderEngine
BINDIR=./bin/
CC=g++
CFLAGS=-w

#LFLAGS=

all : $(OBJS)
	$(CC) $(CFLAGS) ./src/sdl2_renderEngine_main.cpp ./src/VectorMap/Tile.cpp ./src/VectorMap/TileLayer.cpp ./src/VectorMap/VectorMap.cpp -o $(BINDIR)$(PRJNME)
