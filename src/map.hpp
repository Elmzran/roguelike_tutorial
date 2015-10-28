// Header file for map data

// Tile struct
struct Tile {
	// Variable for determining can walk status of a tile
	bool canWalk;
	Tile() : canWalk(true) {};
};

// Map class
class Map {
	public:
		// Map width and height
		int width, height;
		
		// Constructor & Destructor
		Map(int width, int height);
		~Map();
		
		// Check if a tile is a wall
		bool isWall(int x, int y) const;
		
		// Render the map
		void render() const;
	
	protected:
		// Array for holding tile data
		Tile *tiles;
		
		// Set a tile to a wall
		void setWall(int x, int y);
};
