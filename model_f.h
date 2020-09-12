#ifndef MODEL_F
#define MODEL_F

class Field
{
private:
	short int field [20][10];
public:
	Field();
	void clean_row(int row_pointer);
	void create_figure();
	bool collisions();
	void move_coord();
	int get_width();
	void show_field();
	bool search_full_rows();
};

#endif
