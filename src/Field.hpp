#pragma once

#include <vector>
#include <cstdint>
#include <string>
#include <iostream>

class Field
{
public:
	Field();
	~Field();

	void up();
	void down();
	void right();
	void left();

	void setNum(char num);

	void draw_field();

private:
	std::vector<std::vector<char>> field_;
	std::uint8_t pos_x_;
	std::uint8_t pos_y_;
};

