#ifndef MODEL_G
#define MODEL_G
#include "model_f.h"
class Game
{
private:
	int points;
	Field* g_field;

public:
	Game(Field* game_field) : g_field(game_field), points(0) {}
	bool game_over();
	bool use_of_arrows(int key);
	int get_points();

	void inc_points();
};
#endif
