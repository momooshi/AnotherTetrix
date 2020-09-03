#include "model_t.h"
Field::Field (int height, int width): m_height (height), m_width(width)
{
  Matrix.resize(m_height);
  for (int i=0; i<m_height; i++)
  {
    std::vector<int> tmp (m_width);
    for (int i=0; i<m_width; i++)
    {
      tmp.push_back(0);
    }
    Matrix.push_back(tmp);
  }
}

bool Game::game_over()
{
  int s = g_field->get_width();
  for (int i=0; i<s; i++)
  {
    if (g_field) return true;
  }
  return false;
}
