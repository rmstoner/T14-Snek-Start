#pragma once
#include "Graphics.h"
#include "Location.h"


class Board
{
public:
	Board(Graphics& gfx);
	void DrawCell(const Location& loc, Color c);
	void DrawBorder();
	int GetGridWidth() const;
	int GetGridHeight() const;
	int GetGridPad() const;
	int GetGridDim() const;
	bool isInsideBoard(const Location& loc) const;

private:
	static constexpr int dim = 20;
	static constexpr int width = 30;
	static constexpr int height = 24;
	static constexpr int pad = 4;
	static constexpr int x = 20;
	static constexpr int y = 20;
	Graphics& gfx;
};