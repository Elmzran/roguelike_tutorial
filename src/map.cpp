#include "libtcod.hpp"
#include "map.hpp"

// Constructor, creates tile array and two walls
Map::Map(int width, int height) : width(width), height(height) {
	tiles = new Tile[width * height];
	setWall(30, 22);
	setWall(50, 22);
}

// Destructor, delete map
Map::~Map() {
	delete [] tiles;
}

// Helper functions for checking and setting walls
bool Map::isWall(int x, int y) const {
	return !tiles[x + y * width].canWalk;
}
void Map::setWall(int x, int y) {
	tiles[x + y * width].canWalk = false;
}

// Render function for map drawing
void Map::render() const {
	static const TCODColor darkWall(0, 0, 100);
	static const TCODColor darkGround(50, 50, 150);
	
	// Fill console background with correct color
	for (int x = 0; x < width; ++x) {
		for (int y = 0; y < height; ++y) {
			TCODConsole::root -> setCharBackground(x, y, 
				isWall(x, y) ? darkWall : darkGround );
		}
	}
}
