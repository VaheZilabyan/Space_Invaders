#ifndef STRUCT_HPP
#define STRUCT_HPP

struct hero
{
	char code;
	int posx;
	int posy = 25;
}; 

struct enemy
{
	char code;
	int posx;
	int posy;
	bool isalive = true;
};

struct gun
{
    char code = '*';
    int posx = 18;
    int posy;
};

struct gun1
{
	char code = '*';
	int posx=5; 
    int posy=8; 
};

#endif 
