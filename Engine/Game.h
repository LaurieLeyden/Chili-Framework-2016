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
	int PutGraticule(int dx, int dy,int r, int g, int b)
	{
		
		gfx.PutPixel(400 +x, 300 + y, r, g, b);
		gfx.PutPixel(395 +x, 300 + y, r, g, b);
		gfx.PutPixel(396 +x, 300 + y, r, g, b);
		gfx.PutPixel(397 +x, 300 + y, r, g, b);
		gfx.PutPixel(403 +x, 300 + y, r, g, b);
		gfx.PutPixel(404 +x, 300 + y, r, g, b);
		gfx.PutPixel(405 +x, 300 + y, r, g, b);
		gfx.PutPixel(400 +x, 295 + y, r, g, b);
		gfx.PutPixel(400 +x, 296 + y, r, g, b);
		gfx.PutPixel(400 +x, 297 + y, r, g, b);
		gfx.PutPixel(400 +x, 303 + y, r, g, b);
		gfx.PutPixel(400 +x, 304 + y, r, g, b);
		gfx.PutPixel(400 +x, 305 + y, r, g, b);
		return 0;
	}
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	/********************************/
	const int x = 100;
	const int y = -200; //Changed to const after seeing the vidjio. 29/05/2017
	const int r = 0;
	const int g = 120;
	const int b = 0;

};