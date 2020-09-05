#ifndef MODEL_F
#define MODEL_F
#include <vector>

class Field
{
private:
	int m_height;
	int m_width;
	std::vector <std::vector <int>> Matrix;
public:
	Field(int height, int width);
	void clean_row();
	void create_figure();
	bool collisions();
	void move_coord();
	int get_width() { return m_width; }

};

#endif
