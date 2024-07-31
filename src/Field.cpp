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
}

void Field::down()
{
}

void Field::right()
{
}

void Field::left()
{
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
	std::string field;
	for (auto const row : field_)
	{
		field += '|';
		for (char const col : row)
		{
			field += col;
			field += '|';
		}
		field += '\n';
	}

	std::cout << field;
}
