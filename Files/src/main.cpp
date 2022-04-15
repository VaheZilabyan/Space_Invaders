//Space invaders

#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h>

#include "../include/record.hpp"
#include "../include/input.hpp"
#include "../include/globals.hpp"
#include "../include/struct.hpp"
#include "../include/print.hpp"
#include "../include/initialization.hpp"

void switch_menu(short int menu_point) //menu
{
    switch(menu_point)
    {
        case 1:		
		{	
			system("clear");
			name();
			std::cout << "\n \n \n \n \n \n \n \n \n \n";
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   " << "\033[1;32m" << "Play" << "\033[0m\n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   instruction \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   About \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Records \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Reset \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Quit \n" << std::endl;
            break;
        }
		
	    case 2:
		{
		    system("clear");
			name();
			std::cout << "\n \n \n \n \n \n \n \n \n \n";
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Play \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   " << "\033[1;32m" << "instruction" << "\033[0m\n \n";
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   About \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Records \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Reset \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Quit \n" << std::endl;
			break;
		}

		case 3:	
		{
	        system("clear");
			name();
			std::cout << "\n \n \n \n \n \n \n \n \n \n";
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Play \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   instruction \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   " << "\033[1;32m" << "About" << "\033[0m\n \n";
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Records \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Reset \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Quit \n" << std::endl;
		    break;
		}
		
		case 4:	
		{
	        system("clear");
			name();
			std::cout << "\n \n \n \n \n \n \n \n \n \n";
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Play \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   instruction \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   About \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   " << "\033[1;32m" << "Records" << "\033[0m\n \n";
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Reset \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Quit \n" << std::endl;
		    break;
		}
		
		case 5:
		{
	        system("clear");
			name();
			std::cout << "\n \n \n \n \n \n \n \n \n \n";
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Play \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   instruction \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   About \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Records \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   " << "\033[1;32m" << "Reset" << "\033[0m\n \n";
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Quit \n" << std::endl;
		    break;
		}

        case 6:
        {   
            system("clear");
			name();
            std::cout << "\n \n \n \n \n \n \n \n \n \n";
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Play \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   instruction \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   About \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Records \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Reset \n" << std::endl;
			std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   " << "\033[1;32m" << "Quit" << "\033[0m\n \n";	
            break;
        }
    }
}

void left(char world[][Y], hero &link, enemy *inv, gun &g, gun1 &g1) // dzax sharjel
{
    if (link.posy > 1)
	{
		system("clear");
		link.posy = link.posy - 1;
		init(world, link, inv, g, g1);
		paint(world, link, inv, g, g1);
	}
}

void right(char world[][Y], hero &link, enemy *inv, gun &g, gun1 &g1) // aj sharjel
{
    if (link.posy < 50)
	{
		system("clear");
		link.posy = link.posy + 1;
		init(world, link, inv, g, g1);
		paint(world, link, inv, g, g1);
	}
}



void game(char world[][Y], hero &link, enemy *inv, gun &g, gun1 &g1) 
{
	struct player
    {
        char name[20];
    };

    std::cout << "REGISTRATION\n";
    player x;
    normal();
    std::cout << "Nickname:";
    std::cin >> x.name;
    system("clear");
    std::fstream records_file;
    std::string players_records;
    records_file.open("records.txt", std :: ios :: app);
	records_file<<x.name;

    cbreak();
	
	system("clear");
	init(world, link, inv, g, g1);
    paint(world, link, inv, g, g1);

	cbreak();
	while (true) {
		shot(world, link, inv, g, g1);
		if (k == 13 || life == 0) {
			records_file << "\033[1;32m  " << "\t \t \t \tLOSE" << "\033[0m \n";
			break;
		}
		if (end == true)
			break;
		const char key = keypress();
		switch (key) {
			case 'z': case 'Z':
				left(world, link, inv, g, g1);
			break;   
			
			case 'x': case 'X':
				right(world, link, inv, g, g1);
			break;
			
			case 'c': case 'C':
                while (g.posx > 0) {
					t = true; //erb krakum enq -> t = true;
					gg = g.posy; 
                    if (g.posx > 0) {
						system("clear");
						t = true;
						g.posx = g.posx - 2;
						init(world, link, inv, g, g1);
						paint(world, link, inv, g, g1);	
						
						const char key = keypress();
						if (key == 'z'){
							t = true;
							left(world, link, inv, g, g1);
						}
						if (key == 'x'){
							t = true;
							right(world, link, inv, g, g1);
						}
						
						if (g.posx == 0) {
							g.posx = 18;
							break;
						} 	
						if (score == 200) {
							records_file << "\033[1;32m  " << "\t \t \t \tWIN" << "\033[0m \n";
							return;
						}
					}
				}
                break;
			
            case 'q':
				end = true;
                break;                
		}
	} 
}

int main()
{
    char world[X][Y];
    gun g;
	gun1 g1;
    hero link;
    enemy inv[20];

	const int menu_size = 6;
    short int menu_point = 0;
    const int ENTER = 10;
    const int SPACE = 32;
    const int DOWN = 66;
    const int UP = 65; 		
	
    start: system("clear");
	end = false;
    name();
	menu();
    switch_menu(menu_point);
	
    cbreak();
	while (true)
	{     
	    const char key = keypress();		 
		switch(key)
		{   
            case DOWN:
            {
                ++menu_point;
                if (menu_point == menu_size + 1)
                {
                    menu_point = 1;
                }
                switch_menu(menu_point);
                break;
            }

            case UP:
            {
                --menu_point;
                if (menu_point == 0)
                {
                    menu_point = 6;
                }
                switch_menu(menu_point);
                break;
            }

		    case ENTER:
		    { 
                if (menu_point == 1)
                {  
                    menu_point = 0;  
					
					if (deleting_record == true)
				    {
				        std :: fstream records_file;
					    records_file.open("records.txt", std :: ios :: out | std :: ios :: trunc);
					}	    
				    deleting_record = false;
					
					system("clear");
					init(world, link, inv, g, g1);
				    game(world, link, inv, g, g1);
					if (k == 13 || life == 0)
					{
						lose();
						newgame = true;
						cbreak();
						while (true) {
							const char key = keypress();
							switch (key) {
								case SPACE:
									goto start;;
							}       
						}
					}
					if (score == 200)
					{
						win();
						newgame = true;
						cbreak();
						while (true) {
							const char key = keypress();
							switch (key) {
							case SPACE:
								goto start;;
							}       
						}
					}
					if (end == true)
						goto start;
				    break;
			    }

			    if (menu_point == 2)   
			    {       
				    system("clear");
					instruction();
				    break;
				}  

                if (menu_point == 3)
                {
                    system("clear");
					about();
                    break;
                }
				
				if (menu_point == 4)
                {
                    system("clear");
					deleting_record == false ? records() : no_records();
                    break;
                }
				
				if (menu_point == 5)
                {
                    is_not_empty = false;
                    system("clear");
                    delete_records();
                    deleting_record = true;
                    break;
                }

                if (menu_point == 6)
                {    
                    system("clear");
					goto exit;
                    break;
                }
			}
            
            case SPACE:
			{
				system("clear");
				name();
                menu();
			}	
		}	
	}	
    
	exit:
	normal();

    return 0;
}
