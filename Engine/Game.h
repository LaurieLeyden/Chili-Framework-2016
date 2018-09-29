/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"

class Game
{
public:
	Game(class MainWindow& wnd);
	Game(const Game&) = delete;
	Game& operator=(const Game&) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	/********************************/
	int PutGraticule(int x, int y,int r, int g, int b)
	{
		
		gfx.PutPixel(400 + x, 300 + y, r, g, b);
		gfx.PutPixel(395 + x, 300 + y, r, g, b);
		gfx.PutPixel(396 + x, 300 + y, r, g, b);
		gfx.PutPixel(397 + x, 300 + y, r, g, b);
		gfx.PutPixel(403 + x, 300 + y, r, g, b);
		gfx.PutPixel(404 + x, 300 + y, r, g, b);
		gfx.PutPixel(405 + x, 300 + y, r, g, b);
		gfx.PutPixel(400 + x, 295 + y, r, g, b);
		gfx.PutPixel(400 + x, 296 + y, r, g, b);
		gfx.PutPixel(400 + x, 297 + y, r, g, b);
		gfx.PutPixel(400 + x, 303 + y, r, g, b);
		gfx.PutPixel(400 + x, 304 + y, r, g, b);
		gfx.PutPixel(400 + x, 305 + y, r, g, b);
		return 0;
	}

	int PutSquareGraticule(int x, int y, int r, int g, int b)
		{
		
		gfx.PutPixel(x, y, r, g, b);// The centre.
		//Make the gratiule square man.
		gfx.PutPixel(x -10,y - 5, r , g, b); 
		gfx.PutPixel(x - 9, y - 5 ,r, g, b);
		gfx.PutPixel(x - 8, y - 5, r, g, b);
		gfx.PutPixel(x - 7, y - 5, r, g, b);
		gfx.PutPixel(x - 6, y - 5, r, g, b);
		gfx.PutPixel(x - 5, y - 5, r, g, b);
		gfx.PutPixel(x - 4, y - 5, r, g, b);
		gfx.PutPixel(x - 3, y - 5, r, g, b);
		gfx.PutPixel(x - 2, y - 5, r, g, b);
		gfx.PutPixel(x - 1, y - 5, r, g, b);
		gfx.PutPixel(x - 0, y - 5, r, g, b);//End of top line. Needs to be X-5 up to X+5.
		gfx.PutPixel(x - 0, y - 4, r, g, b);
		gfx.PutPixel(x - 0, y - 3, r, g, b);
		gfx.PutPixel(x - 0, y - 2, r, g, b);
		gfx.PutPixel(x - 0, y - 1, r, g, b);
		gfx.PutPixel(x - 0, y - 0, r, g, b);
		gfx.PutPixel(x - 0, y + 1, r, g, b);
		gfx.PutPixel(x - 0, y + 2, r, g, b);
		gfx.PutPixel(x - 0, y + 3, r, g, b);
		gfx.PutPixel(x - 0, y + 4, r, g, b);
		gfx.PutPixel(x - 0, y + 5, r, g, b);//End of right side.
		gfx.PutPixel(x - 1, y + 5, r, g, b);
		gfx.PutPixel(x - 2, y + 5, r, g, b);
		gfx.PutPixel(x - 3, y + 5, r, g, b);
		gfx.PutPixel(x - 4, y + 5, r, g, b);
		gfx.PutPixel(x - 5, y + 5, r, g, b);
		gfx.PutPixel(x - 6, y + 5, r, g, b);
		gfx.PutPixel(x - 7, y + 5, r, g, b);
		gfx.PutPixel(x - 8, y + 5, r, g, b);
		gfx.PutPixel(x - 9, y + 5, r, g, b);
		gfx.PutPixel(x - 10, y + 5, r, g, b);//end of bottom.
		gfx.PutPixel(x - 10, y + 4, r, g, b);
		gfx.PutPixel(x - 10, y + 3, r, g, b);
		gfx.PutPixel(x - 10, y + 2, r, g, b);
		gfx.PutPixel(x - 10, y + 1, r, g, b);
		gfx.PutPixel(x - 10, y + 0, r ,g, b);
		gfx.PutPixel(x - 10, y - 1, r, g, b);
		gfx.PutPixel(x - 10, y - 2, r, g, b);
		gfx.PutPixel(x - 10, y - 3, r, g, b);
		gfx.PutPixel(x - 10, y - 4, r, g, b);
		gfx.PutPixel(x - 10, y - 5, r, g, b);//end of left side, end of square graticule.
		    	return 0;
		}

	int PutPoo()
	{

		gfx.PutPixel(14 + x, 0 + y, 138, 77, 0);
		gfx.PutPixel(7 + x, 1 + y, 138, 77, 0);
		gfx.PutPixel(13 + x, 1 + y, 138, 77, 0);
		gfx.PutPixel(20 + x, 1 + y, 138, 77, 0);
		gfx.PutPixel(6 + x, 2 + y, 138, 77, 0);
		gfx.PutPixel(13 + x, 2 + y, 138, 77, 0);
		gfx.PutPixel(20 + x, 2 + y, 138, 77, 0);
		gfx.PutPixel(6 + x, 3 + y, 138, 77, 0);
		gfx.PutPixel(6 + x, 4 + y, 138, 77, 0);
		gfx.PutPixel(14 + x, 4 + y, 138, 77, 0);
		gfx.PutPixel(21 + x, 4 + y, 138, 77, 0);
		gfx.PutPixel(7 + x, 5 + y, 138, 77, 0);
		gfx.PutPixel(13 + x, 5 + y, 138, 77, 0);
		gfx.PutPixel(21 + x, 5 + y, 138, 77, 0);
		gfx.PutPixel(7 + x, 6 + y, 138, 77, 0);
		gfx.PutPixel(20 + x, 6 + y, 138, 77, 0);
		gfx.PutPixel(6 + x, 7 + y, 138, 77, 0);
		gfx.PutPixel(14 + x, 7 + y, 51, 28, 0);
		gfx.PutPixel(15 + x, 7 + y, 51, 28, 0);
		gfx.PutPixel(20 + x, 7 + y, 138, 77, 0);
		gfx.PutPixel(12 + x, 8 + y, 51, 28, 0);
		gfx.PutPixel(13 + x, 8 + y, 51, 28, 0);
		gfx.PutPixel(14 + x, 8 + y, 51, 28, 0);
		gfx.PutPixel(7 + x, 9 + y, 138, 77, 0);
		gfx.PutPixel(11 + x, 9 + y, 51, 28, 0);
		gfx.PutPixel(12 + x, 9 + y, 102, 57, 0);
		gfx.PutPixel(13 + x, 9 + y, 138, 77, 0);
		gfx.PutPixel(14 + x, 9 + y, 138, 77, 0);
		gfx.PutPixel(15 + x, 9 + y, 51, 28, 0);
		gfx.PutPixel(21 + x, 9 + y, 138, 77, 0);
		gfx.PutPixel(10 + x, 10 + y, 51, 28, 0);
		gfx.PutPixel(11 + x, 10 + y, 51, 28, 0);
		gfx.PutPixel(12 + x, 10 + y, 102, 57, 0);
		gfx.PutPixel(13 + x, 10 + y, 138, 77, 0);
		gfx.PutPixel(14 + x, 10 + y, 138, 77, 0);
		gfx.PutPixel(15 + x, 10 + y, 51, 28, 0);
		gfx.PutPixel(20 + x, 10 + y, 138, 77, 0);
		gfx.PutPixel(9 + x, 11 + y, 51, 28, 0);
		gfx.PutPixel(10 + x, 11 + y, 138, 77, 0);
		gfx.PutPixel(11 + x, 11 + y, 138, 77, 0);
		gfx.PutPixel(12 + x, 11 + y, 51, 28, 0);
		gfx.PutPixel(13 + x, 11 + y, 51, 28, 0);
		gfx.PutPixel(14 + x, 11 + y, 51, 28, 0);
		gfx.PutPixel(15 + x, 11 + y, 51, 28, 0);
		gfx.PutPixel(16 + x, 11 + y, 51, 28, 0);
		gfx.PutPixel(9 + x, 12 + y, 51, 28, 0);
		gfx.PutPixel(10 + x, 12 + y, 138, 77, 0);
		gfx.PutPixel(11 + x, 12 + y, 138, 77, 0);
		gfx.PutPixel(12 + x, 12 + y, 111, 62, 0);
		gfx.PutPixel(13 + x, 12 + y, 102, 57, 0);
		gfx.PutPixel(14 + x, 12 + y, 102, 57, 0);
		gfx.PutPixel(15 + x, 12 + y, 102, 57, 0);
		gfx.PutPixel(16 + x, 12 + y, 51, 28, 0);
		gfx.PutPixel(9 + x, 13 + y, 51, 28, 0);
		gfx.PutPixel(10 + x, 13 + y, 109, 61, 0);
		gfx.PutPixel(11 + x, 13 + y, 138, 77, 0);
		gfx.PutPixel(12 + x, 13 + y, 138, 77, 0);
		gfx.PutPixel(13 + x, 13 + y, 138, 77, 0);
		gfx.PutPixel(14 + x, 13 + y, 138, 77, 0);
		gfx.PutPixel(15 + x, 13 + y, 138, 77, 0);
		gfx.PutPixel(16 + x, 13 + y, 51, 28, 0);
		gfx.PutPixel(5 + x, 14 + y, 51, 28, 0);
		gfx.PutPixel(7 + x, 14 + y, 51, 28, 0);
		gfx.PutPixel(8 + x, 14 + y, 51, 28, 0);
		gfx.PutPixel(9 + x, 14 + y, 51, 28, 0);
		gfx.PutPixel(10 + x, 14 + y, 51, 28, 0);
		gfx.PutPixel(11 + x, 14 + y, 138, 77, 0);
		gfx.PutPixel(12 + x, 14 + y, 138, 77, 0);
		gfx.PutPixel(13 + x, 14 + y, 138, 77, 0);
		gfx.PutPixel(14 + x, 14 + y, 138, 77, 0);
		gfx.PutPixel(15 + x, 14 + y, 138, 77, 0);
		gfx.PutPixel(16 + x, 14 + y, 51, 28, 0);
		gfx.PutPixel(4 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(5 + x, 15 + y, 138, 77, 0);
		gfx.PutPixel(6 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(7 + x, 15 + y, 116, 65, 0);
		gfx.PutPixel(8 + x, 15 + y, 138, 77, 0);
		gfx.PutPixel(9 + x, 15 + y, 138, 77, 0);
		gfx.PutPixel(10 + x, 15 + y, 138, 77, 0);
		gfx.PutPixel(11 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(12 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(13 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(14 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(15 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(16 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(17 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(18 + x, 15 + y, 51, 28, 0);
		gfx.PutPixel(1 + x, 16 + y, 51, 28, 0);
		gfx.PutPixel(2 + x, 16 + y, 51, 28, 0);
		gfx.PutPixel(3 + x, 16 + y, 51, 28, 0);
		gfx.PutPixel(4 + x, 16 + y, 51, 28, 0);
		gfx.PutPixel(5 + x, 16 + y, 138, 77, 0);
		gfx.PutPixel(6 + x, 16 + y, 51, 28, 0);
		gfx.PutPixel(7 + x, 16 + y, 116, 65, 0);
		gfx.PutPixel(8 + x, 16 + y, 138, 77, 0);
		gfx.PutPixel(9 + x, 16 + y, 138, 77, 0);
		gfx.PutPixel(10 + x, 16 + y, 138, 77, 0);
		gfx.PutPixel(11 + x, 16 + y, 138, 77, 0);
		gfx.PutPixel(12 + x, 16 + y, 138, 77, 0);
		gfx.PutPixel(13 + x, 16 + y, 109, 61, 0);
		gfx.PutPixel(14 + x, 16 + y, 51, 28, 0);
		gfx.PutPixel(15 + x, 16 + y, 138, 77, 0);
		gfx.PutPixel(16 + x, 16 + y, 138, 77, 0);
		gfx.PutPixel(17 + x, 16 + y, 138, 77, 0);
		gfx.PutPixel(18 + x, 16 + y, 123, 69, 0);
		gfx.PutPixel(19 + x, 16 + y, 51, 28, 0);
		gfx.PutPixel(0 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(1 + x, 17 + y, 87, 49, 0);
		gfx.PutPixel(2 + x, 17 + y, 87, 49, 0);
		gfx.PutPixel(3 + x, 17 + y, 87, 49, 0);
		gfx.PutPixel(4 + x, 17 + y, 87, 49, 0);
		gfx.PutPixel(5 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(6 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(7 + x, 17 + y, 43, 24, 0);
		gfx.PutPixel(8 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(9 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(10 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(11 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(12 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(13 + x, 17 + y, 40, 22, 0);
		gfx.PutPixel(14 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(15 + x, 17 + y, 138, 77, 0);
		gfx.PutPixel(16 + x, 17 + y, 138, 77, 0);
		gfx.PutPixel(17 + x, 17 + y, 138, 77, 0);
		gfx.PutPixel(18 + x, 17 + y, 123, 69, 0);
		gfx.PutPixel(19 + x, 17 + y, 51, 28, 0);
		gfx.PutPixel(0 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(1 + x, 18 + y, 138, 77, 0);
		gfx.PutPixel(2 + x, 18 + y, 138, 77, 0);
		gfx.PutPixel(3 + x, 18 + y, 138, 77, 0);
		gfx.PutPixel(4 + x, 18 + y, 138, 77, 0);
		gfx.PutPixel(5 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(6 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(7 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(8 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(9 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(10 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(11 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(12 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(13 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(14 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(15 + x, 18 + y, 138, 77, 0);
		gfx.PutPixel(16 + x, 18 + y, 138, 77, 0);
		gfx.PutPixel(17 + x, 18 + y, 138, 77, 0);
		gfx.PutPixel(18 + x, 18 + y, 123, 69, 0);
		gfx.PutPixel(19 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(20 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(21 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(22 + x, 18 + y, 51, 28, 0);
		gfx.PutPixel(0 + x, 19 + y, 51, 28, 0);
		gfx.PutPixel(1 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(2 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(3 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(4 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(5 + x, 19 + y, 51, 28, 0);
		gfx.PutPixel(6 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(7 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(8 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(9 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(10 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(11 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(12 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(13 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(14 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(15 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(16 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(17 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(18 + x, 19 + y, 123, 69, 0);
		gfx.PutPixel(19 + x, 19 + y, 51, 28, 0);
		gfx.PutPixel(20 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(21 + x, 19 + y, 138, 77, 0);
		gfx.PutPixel(22 + x, 19 + y, 65, 36, 0);
		gfx.PutPixel(23 + x, 19 + y, 51, 28, 0);
		gfx.PutPixel(1 + x, 20 + y, 51, 28, 0);
		gfx.PutPixel(2 + x, 20 + y, 51, 28, 0);
		gfx.PutPixel(3 + x, 20 + y, 51, 28, 0);
		gfx.PutPixel(4 + x, 20 + y, 51, 28, 0);
		gfx.PutPixel(5 + x, 20 + y, 51, 28, 0);
		gfx.PutPixel(6 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(7 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(8 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(9 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(10 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(11 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(12 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(13 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(14 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(15 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(16 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(17 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(18 + x, 20 + y, 123, 69, 0);
		gfx.PutPixel(19 + x, 20 + y, 51, 28, 0);
		gfx.PutPixel(20 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(21 + x, 20 + y, 138, 77, 0);
		gfx.PutPixel(22 + x, 20 + y, 65, 36, 0);
		gfx.PutPixel(23 + x, 20 + y, 51, 28, 0);
		gfx.PutPixel(0 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(1 + x, 21 + y, 138, 77, 0);
		gfx.PutPixel(2 + x, 21 + y, 138, 77, 0);
		gfx.PutPixel(3 + x, 21 + y, 138, 77, 0);
		gfx.PutPixel(4 + x, 21 + y, 138, 77, 0);
		gfx.PutPixel(5 + x, 21 + y, 138, 77, 0);
		gfx.PutPixel(6 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(7 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(8 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(9 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(10 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(11 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(12 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(13 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(14 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(15 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(16 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(17 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(18 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(20 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(21 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(22 + x, 21 + y, 51, 28, 0);
		gfx.PutPixel(0 + x, 22 + y, 51, 28, 0);
		gfx.PutPixel(1 + x, 22 + y, 65, 36, 0);
		gfx.PutPixel(2 + x, 22 + y, 65, 36, 0);
		gfx.PutPixel(3 + x, 22 + y, 65, 36, 0);
		gfx.PutPixel(4 + x, 22 + y, 65, 36, 0);
		gfx.PutPixel(5 + x, 22 + y, 65, 36, 0);
		gfx.PutPixel(6 + x, 22 + y, 51, 28, 0);
		gfx.PutPixel(1 + x, 23 + y, 51, 28, 0);
		gfx.PutPixel(2 + x, 23 + y, 51, 28, 0);
		gfx.PutPixel(3 + x, 23 + y, 51, 28, 0);
		gfx.PutPixel(4 + x, 23 + y, 51, 28, 0);
		gfx.PutPixel(5 + x, 23 + y, 51, 28, 0);
		gfx.PutPixel(6 + x, 23 + y, 51, 28, 0);
		return 0;
	}

private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	/********************************/
	const int x = 300;
	const int y = 250; //Changed to const after seeing the vidjio. 29/05/2017
	const int r = 255;
	const int g = 255;
	const int b = 255;

};
