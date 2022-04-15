#ifndef INIITIALIZATION_HPP
#define INIITIALIZATION_HPP

#include "struct.hpp"
#include "globals.hpp"

void vertical_move(enemy *inv, int x, int y);
int random_position(enemy *inv);
void init(char world[][Y], hero &link, enemy *inv, gun &g, gun1 &g1);
void shot(char world[][Y], hero &link, enemy *inv, gun &g, gun1 &g1);

#endif 
