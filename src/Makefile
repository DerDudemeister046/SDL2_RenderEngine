CC=g++
CFLAGS=-w
LFLAGS=-lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer
PROJECTNAME=SDL2_RenderEngine
MAILFILE=sdl2_renderEngine_main.cpp
OBJFILES=sdl2_renderEngine_main.o Tile.o TileLayer.o VectorMap.o Renderer.o MapWindow.o

all: $(OBJFILES)
	# Compile Program
	$(CC) $(OBJFILES) $(CFLAGS) $(LFLAGS) -o $(PROJECTNAME)

tile.o: Tile.cpp Tile.hpp
	# build Tile.o
	$(CC) -c Tile.cpp

tileLayer.o: Tile.o TileLayer.cpp TileLayer.hpp
	# build TileLayer.o
	$(CC) -c Tile.cpp TileLayer.cpp

vectorMap.o: TileLayer.o VectorMap.cpp
	# build VectorMap.o
	$(CC) -c TileLayer.cpp VectorMap.cpp 

renderer.o: Renderer.cpp
	# build Renderer.o
	$(CC) -c Renderer.cpp

mapWindow.o: Renderer.o MapWindow.cpp
	$(CC) -c Renderer.cpp MapWindow.cpp

sdl2_renderEngine_main.o: tile.o tileLayer.o vectorMap.o mapWindow.o
	# build MainFile
	$(CC) -c $(MAILFILE)

clean:
	# cleaning directory
	rm *.o $(PROJECTNAME)