#include "model_f.h"
#include "iostream"
/*Field::Field()
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			field[i][j] = 0;
		}
	}
}*/

Field::Field()
{
		for (int j = 0; j < 10; j++)
		{
			field[19][j] = 0;
			field[1][j] = 0;
			field[0][j] = 0;
			field[18][j] = 1;
		}
	for (int i = 2; i < 18; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			field[i][j] = 0;
		}
		for (int j = 0; j < 9; j++)
		{
			if(j%2==0)field[i][j] = 1;
		}
	}
}

void Field::clean_row(int row_pointer)
{
	for (int i = 0; i < 10; i++)
	{
		field[row_pointer][i] = 0;
	}
	for (int i = row_pointer; i > 0; i--)
	{
		for (int j = 0; j < 10; j++)
		{
			field[i][j] = field[i-1][j];
		}
	}
}

void Field::show_field()
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			std::cout<<field[i][j];
		}
		std::cout << std::endl;
	}
}

bool Field::search_full_rows()
{
	bool full_row=true;
	for (int i = 19; i > 0; i--)
	{
		for (int j = 0; j < 10; j++)
		{
			if (field[i][j] == 0)
			{
				full_row = false;
			}
		}
		if (full_row)
		{
			clean_row(i);
			return full_row;
		}
		else full_row = true;
	}
}