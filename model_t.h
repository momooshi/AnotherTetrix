#ifndef MODEL_T
#define MODEL_T
#include <vector>

class Tetranom
{
private:
  std::vector <std::vector<int>> m_coordinates; //coordinates
  int m_id; //magic number describing the figure
public:

  Tetranom (std::vector<std::vector<int>> coord, int id): m_coordinates(coord), m_id(id) {}

  std::vector <std::vector<int>> get_coord ();
  //void show();
  void get_id();

};

Tetranom o {{{0,0}, {0, 1}, {1,0}, {1,1}}, 1};

class Field
{
private:
  int m_height;
  int m_width;
  std::vector <std::vector <int>> Matrix;
public:
  Field (int height, int width);
  void clean_row();
  void create_figure();
  bool collisions ();
  void move_coord ();
  int get_width() {return m_width; }
  
};

class Game
{
private:
  int points;
  Field *g_field;

public:
  Game (Field *game_field): g_field(game_field), points(0) {}
  bool game_over();
  bool use_of_arrows(int key);
  int get_points();

  void inc_points ();
};
#endif
