#ifndef MODEL_T
#define MODEL_T
//#include <cstring>
#include <vector>

class Tetranom
{
private:
  
  char m_id; //magic symbol describing the figure; default is '0' for free blocks
  std::vector <std::vector<char>> m_coordinates; //field describing each figure. the coordinates of each block are the numbers of the rows and the columns

public:

	Tetranom();
	Tetranom(std::vector<std::vector<char>> coord_list, char id);
  
	void rotation();
    std::vector<std::vector<int>> get_coordinates();
	char get_block_type();
};

//figures

Tetranom o{ {{'1', '1'},
			 {'1', '1'}},
			 '1' };
Tetranom i{ {{'0', '0', '0', '0', '0'},
			 {'0', '0', '2', '0', '0'},
			 {'0', '0', '2', '0', '0'},
			 {'0', '0', '2', '0', '0'},
			 {'0', '0', '2', '0', '0'}},
			 '2' };
Tetranom t{ {{'0', '3', '0'},
			 {'3', '3', '3'}, 
			 {'0', '0', '0'}},
			 '3' };

#endif
