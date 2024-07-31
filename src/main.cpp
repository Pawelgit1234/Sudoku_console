#include <conio.h>

#include "Field.hpp"

int main(int argc, char* argv[])
{
	Field f;

	while (true)
	{
		f.draw_field();
		switch (_getch())
		{
		case 72:
			f.up();
			break;
		case 80:
			f.down();
			break;
		case 75:
			f.left();
			break;
		case 77:
			f.right();
			break;
		}
	}

	return 0;
}