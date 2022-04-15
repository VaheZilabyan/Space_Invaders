#include <iostream>

#include "../include/struct.hpp"
#include "../include/globals.hpp"
#include "../include/print.hpp"

void vertical_move(enemy *inv, int x, int y)
{
	int m = 8;
	int m1 = 8;
	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
		{
			inv[i].posx = x;
			inv[i].posy = m;
			m = m + 4;	
			if (inv[i].isalive == true)
				inv[i].code = '@';
			else 
				inv[i].code = ' ';
		}
		else 
		{
			inv[i].posx = y;
			inv[i].posy = m1;
			m1 = m1 + 4;
			inv[i].code = '@';
			if (inv[i].isalive == true)
				inv[i].code = '@';
			else 
				inv[i].code = ' ';
		}
	}
}

void init(char world[][Y], hero &link, enemy *inv, gun &g, gun1 &g1) // strukturaneri skzbnarjeqavorum
{	
	if (newgame)
	{
		k = 0;
		score = 0;
		life = 2;
		g.posx = 18;
		for (int i = 0; i < 20; i++)
		{
			inv[i].isalive = true;
		}
	}
	int i,j;
	link.code = 'X';
    link.posx = 19;
    
    if (t == false) {
		g.posy = link.posy;   //erb chenq krakel, -> krakeluc heto t==true
		//t = true;
	}
	else {					  //erb krakum enq
		g.posy = gg;
		t = false;
	}
	
	if (k >= 0 && k < 3) {
		vertical_move(inv, 2, 4);
	}

	if (k >= 3 && k < 6) {
		vertical_move(inv, 6, 8);
	}
	
	if (k >= 6 && k < 9) {
		vertical_move(inv, 10, 12);
	}
	
	if (k >= 9 && k < 12) {
		vertical_move(inv, 14, 16);
	}
	
	if (k >= 12) {
		vertical_move(inv, 18, 20);
	}
		
	
	for (i = 0; i < X; ++i)
	{
		for (j = 0; j < Y; ++j)
		{
			world[i][j] = ' ';
		}
	}
	
	world[link.posx][link.posy] = link.code;
    world[g.posx][g.posy] = g.code;
	world[g1.posx][g1.posy] = g1.code;
	
	for (int i = 0; i < 20; ++i)
	{
		if (g.posx == inv[i].posx  && g.posy == inv[i].posy && inv[i].isalive == true) {
			inv[i].isalive = false;
			score = score + 10; 
		}
	}
	if (g1.posx == link.posx && g1.posy == link.posy) {
		life--; 
	}
	
    for (int i = 0; i < 20; ++i) {
        world[inv[i].posx][inv[i].posy] = inv[i].code;
    }
    newgame = false;
}

int random_position(enemy *inv)
{
	int i = 0;
	int r;
	
	srand (time(NULL));
	i = rand() % 10;
	
	while (inv[i].isalive)
	{
		if (inv[i].isalive)
		{
			r = inv[i].posy;
			break;
		}
		srand (time(NULL));
		i = rand() % 10;
	}
	return r;
}

void shot(char world[][Y], hero &link, enemy *inv, gun &g, gun1 &g1) // verevic krakum en
{
	while (g1.posx < 20) {
		system("clear");
		g1.posx = g1.posx + 1;
		init(world, link, inv, g, g1);
		paint(world, link, inv, g, g1);
		if (g1.posx == 19) {
			if (k >=0 && k < 2)
				g1.posx = 5;
			else if (k >= 2 && k < 5)
				g1.posx = 9;
			else if (k >= 5 && k < 8)
				g1.posx = 12;
			else if (k >= 8 && k < 11)
				g1.posx = 16;
			else if (k >= 11 && k < 13)
				g1.posx = 18;
			else if (k == 13)
				break;
			
			g1.posy = random_position(inv);
			k++;
			break;		   
		}    
		break;
	}	
}