#ifndef MODEL_F
#define MODEL_F
#include <vector>

class Field
{
private:
	std::vector <std::vector <char>> Matrix;
public:
	Field();
	void clean_row();
	void create_figure();
	bool collisions();
	void move_coord();
	int get_width() { return m_width; }

};

#endif
