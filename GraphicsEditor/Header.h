//#ifndef HEADER_H
//#define HEADER_H

#pragma once
#include <SDL/SDL.h>
#include <SDL\SDL_image.h>
#include <cmath>
#include <vector>

namespace functions
{
	class Point
	{
	public:
		Point(int x1 = 0, int y1 = 0)
		{
			x = x1;
			y = y1;
		}

		Point(const Point& otherPoint)
		{
			this->x = otherPoint.x;
			this->y = otherPoint.y;
		}

		int getX() const { return this->x; }

		int getY() const { return this->y; }

		void setX(int x) { this->x = x; }

		void setY(int y) { this->y = y; }

		Point& operator=(const Point& rhs)
		{
			if (this != &rhs)
			{
				this->x = rhs.x;
				this->y = rhs.y;
			}

			return *this;
		}

		int distance(Point secondPoint)
		{
			return round(sqrt((this->x - secondPoint.x) * (this->x - secondPoint.x) +
						(this->y - secondPoint.y) * (this->y - secondPoint.y)));
		}	

	private:
		int x;
		int y;
	};

	struct Pixel
	{
		int x;
		int y;
		Uint8 r;
		Uint8 g;
		Uint8 b;
	};

	SDL_Window* newWindow();

	SDL_Renderer* newRenderer(SDL_Window*);

	/////////////////////////////////////
	void savePixData(int, int,int, int, SDL_Renderer*, SDL_Window*, SDL_Surface* );
	void BresenhamCircleDraw2(int xx, int yy, int radius, SDL_Renderer* renderer, SDL_Window* window);
	/////////////////////////////////////////////

	void BresenhamCircleDraw(int xx, int yy, int radius, SDL_Renderer* renderer);

	void display(int x1, int y1, int xx, int yy, SDL_Renderer* renderer);

	void bresenhamLine(Point &first, Point &second, SDL_Renderer* renderer);

	double** createTable(int n);

	double* createTableBinomials(int n);

	double** createTablePows(int n);

	void bezier(std::vector<functions::Point> points, SDL_Renderer* renderer);

	void rectangle(Point &first, Point &second, SDL_Renderer* renderer);

	void loadBMP(SDL_Surface*, SDL_Renderer*);
	


	//#endif 
}