#pragma once

struct Point
{
	Point() {
		row = 0;
		column = 0;
	}

	Point(int r, int c) {
		row = r;
		column = c;
	}

	void Set(int r, int c) {
		row = r;
		column = c;
	}

	void Set(Point point) {
		row = point.row;
		column = point.column;
	}

	int row;
	int column;
};