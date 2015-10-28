// Actor class definition
class Actor {
	public:
		// Position
		int x, y;
		// ASCII Code
		int ch;
		// Color
		TCODColor col;
		
		// Constructor
		Actor(int x, int y, int ch, const TCODColor &col);
		void render() const;
};
