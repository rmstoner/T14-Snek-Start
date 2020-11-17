#include "Board.h"
#include <assert.h>

Board::Board(Graphics& gfx)
	:
	gfx(gfx)
{
}

void Board::DrawCell(const Location& loc, Color c)
{
	assert(loc.x >= 0);
	assert(loc.x < width);
	assert(loc.y >= 0);
	assert(loc.y < height);

	const int off_x = x;
	const int off_y = y;

	gfx.DrawRectDim(loc.x * (dim + pad) + off_x, loc.y * (dim + pad) + off_y, dim, dim, c);
}

void Board::DrawBorder()
{
	const int off_x = x;
	const int off_y = y;
	gfx.Border(off_x, off_y, width * (dim + pad) + off_x, height * (dim + pad) + off_y, pad, Colors::LightGray);
}


int Board::GetGridWidth() const
{
	return width;
}

int Board::GetGridHeight() const
{
	return height;
}

int Board::GetGridPad() const
{
	return pad;
}

int Board::GetGridDim() const
{
	return dim;
}

bool Board::isInsideBoard(const Location& loc) const
{
	return loc.x >= 0 && loc.x < width &&
		loc.y >= 0 && loc.y < height;
}
