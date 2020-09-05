#include "model_g.h"
bool Game::game_over()
{
    int s = g_field->get_width();
    for (int i = 0; i < s; i++)
    {
        if (g_field) return true;
    }
    return false;
}
