#include "model_t.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <algorithm>
#include <iostream>
Tetranom::Tetranom()
{
	m_id = '0';
	for (int i = 0; i < 5; i++)
	{
		m_coordinates.push_back({ '0', '0', '0', '0', '0' });
	}
}

Tetranom::Tetranom(std::vector<std::vector<char>> coord_list, char id)
{
	m_coordinates = coord_list;
	m_id = id;
}

std::vector<std::vector<int>> Tetranom::get_coordinates()
{
	std::vector<std::vector<int>> coordinates(4); //4 blocks and 2 coordinates
	for (int i = 0; i < m_coordinates.size(); i++)
	{
		for (int j = 0; j < m_coordinates[i].size(); j++)
		{
			if (m_coordinates[i][j] != '0')
				coordinates.push_back({ i, j });
		}
	}
	return coordinates;
}

char Tetranom::get_block_type()
{
	return m_id;
}

void Tetranom::rotation()
{
	//this method will change positions of each filled block with some trigonometric conversions (rotations' matrix)
	//std::vector<std::vector<int>> coordinates = get_coordinates();
	std::vector<std::vector<char>> rotate_coordinates=m_coordinates;
	if (rotation_pointer % 2 == 0)
	{
		for (int i = 0; i < m_coordinates.size(); i++)
		{
			for (int j = 0; j < m_coordinates[i].size(); j++)
			{
				rotate_coordinates[j][i]=m_coordinates[i][j];
			}
		}
		m_coordinates = rotate_coordinates;
		rotation_pointer++;
	}
	else
	{
		for (int i = m_coordinates.size()-1, k=0; i >= 0; i--, k++)
		{
			for (int j = 0; j < m_coordinates[i].size(); j++)
			{
				rotate_coordinates[k][j] = m_coordinates[j][i];
			}
		}
		m_coordinates = rotate_coordinates;
		rotation_pointer++;
	}
}
void Tetranom::show_tetranom()
{
	for (int i = 0; i < m_coordinates.size(); i++)
	{
		for (int j = 0; j < m_coordinates[i].size(); j++)
		{
			std::cout<<m_coordinates[i][j];
		}
		std::cout << std::endl;
	}
}