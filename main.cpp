#include <iostream>
#include "model_t.h"
#include "model_f.h"


int main()
{
	Tetranom o{ {{'1', '1'},
			 {'1', '1'}},
			 '1' };
	Tetranom i{ {{'0', '0', '0', '0', '0'},
				 {'0', '0', '2', '0', '0'},
				 {'0', '0', '2', '0', '0'},
				 {'0', '0', '2', '0', '0'},
				 {'0', '0', '2', '0', '0'}},
				 '2' };
	Tetranom t{ {{'0','3','0'},
				 {'3', '3', '3'},
				{'0','0','0'}},
				 '3' };

	/*Field field;
	field.show_field();*/
	t.show_tetranom();
	t.rotation();
	std::cout << std::endl;
	t.show_tetranom();

	std::cout << std::endl;
	t.rotation();
	std::cout << std::endl;
	t.show_tetranom();

	std::cout << std::endl;
	t.rotation();
	std::cout << std::endl;
	t.show_tetranom();

	std::cout << std::endl;
	t.rotation();
	std::cout << std::endl;
	t.show_tetranom();

	std::cout << std::endl;
	t.rotation();
	std::cout << std::endl;
	t.show_tetranom();
	/*field.search_full_rows();
	field.show_field();*/
}
