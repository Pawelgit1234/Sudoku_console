#include "Field.hpp"

Field::Field() : pos_x_(0), pos_y_(0)
{
	field_ = std::vector<std::vector<char>>(9, std::vector<char>(9, ' '));
}

Field::~Field()
{
	field_.clear();
}

void Field::up()
{
	if (pos_y_ > 0)
		--pos_y_;
}

void Field::down()
{
	if (pos_y_ < 9 - 1)
		++pos_y_;
}

void Field::right()
{
	if (pos_x_ < 9 - 1)
		++pos_x_;
}

void Field::left()
{
	if (pos_x_ > 0)
		--pos_x_;
}

void Field::setNum(char num)
{
	uint8_t int_num = num - 48;
	if (int_num > 0 && int_num < 10)
		field_[pos_y_][pos_x_] = num;
}

void Field::draw_field()
{
	system("cls");
	for (std::uint8_t y = 0; y < 9; ++y)
	{
		std::cout << '|';
		for (std::uint8_t x = 0; x < 9; ++x)
		{
			if (x == pos_x_ && y == pos_y_)
				std::cout << '@';
			else
				std::cout << field_[y][x];
			std::cout << '|';
		}
		std::cout << "\n";
	}
}
