#include <iostream>

#include "print.hpp"
#include "globals.hpp"
#include "struct.hpp"

void paint(char world[][Y], hero &link, enemy *inv, gun &g, gun1 &g1) // tpel
{		
        int i,j;     
        for (i = 0; i <= X; ++i)
        {
            for (j = 0; j <= Y; ++j)
            {
                if (i == link.posx && j == link.posy || i == inv[0].posx && j == inv[0].posy || i == inv[1].posx && j == inv[1].posy
                                                     || i == inv[2].posx && j == inv[2].posy || i == inv[3].posx && j == inv[3].posy
                                                     || i == inv[4].posx && j == inv[4].posy || i == inv[5].posx && j == inv[5].posy
                                                     || i == inv[6].posx && j == inv[6].posy || i == inv[7].posx && j == inv[7].posy
                                                     || i == inv[8].posx && j == inv[8].posy || i == inv[9].posx && j == inv[9].posy
                                                     || i == inv[10].posx && j == inv[10].posy || i == inv[11].posx && j == inv[11].posy
                                                     || i == inv[12].posx && j == inv[12].posy || i == inv[13].posx && j == inv[13].posy
                                                     || i == inv[14].posx && j == inv[14].posy || i == inv[15].posx && j == inv[15].posy
                                                     || i == inv[16].posx && j == inv[16].posy || i == inv[17].posx && j == inv[17].posy
                                                     || i == inv[18].posx && j == inv[18].posy || i == inv[19].posx && j == inv[19].posy
                                                     || i == g.posx && j == g.posy 
													 || i == g1.posx && j == g1.posy
                                                     ) 
                    std::cout << world[i][j];                  
                else
                    std::cout << ((i == 0 || j == 0 || i == X || j == Y) ? '*' : ' ');
            }
            std::cout << std::endl;
        }
		
        std::cout << std::endl;
		std::cout << "Life: " << life << std::endl << std::endl;
		std::cout << "Score: " << score << std::endl << std::endl;
        std::cout << "Space invader" << std::endl;
        std::cout << "x-right, z-left, c-shoot, q-quit" << std::endl;
}


void name() // SPACE INVADERS
{
    std::cout << "\t \t \t \t \t \t \t \033[1;32m  * *   ***     *      * *   *****      * *    * *         *  *      ****   *****  ****   * *  \033[0m \n";
    std::cout << "\t \t \t \t \t \t \t \033[1;32m *   *  *  *   * *    *   *  *          * **   *  *       *  * *     *   *  *      *   * *   * \033[0m \n";
    std::cout << "\t \t \t \t \t \t \t \033[1;32m  *     *  *  *   *    *     *****      * * *  *   *     *  *   *    *    * *****  *   *  *    \033[0m \n";
    std::cout << "\t \t \t \t \t \t \t \033[1;32m    *   ***  *******     *   *          * *  * *    *   *  *******   *    * *      ****     *  \033[0m \n";
	std::cout << "\t \t \t \t \t \t \t \033[1;32m *   *  *   *       * *   *  *          * *   **     * *  *       *  *   *  *      * *   *   * \033[0m \n";
	std::cout << "\t \t \t \t \t \t \t \033[1;32m  * *   *  *         * * *   *****      * *    *      *  *         * ****   *****  *   *  * *  \033[0m \n";
}

void menu() //menu
{
	std::cout << "\n \n \n \n \n \n \n \n \n \n";
    std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Play \n" << std::endl;
    std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   instruction \n" << std::endl;
    std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   About \n" << std::endl;
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Records \n" << std::endl;
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Reset \n" << std::endl;
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Quit \n" << std::endl;	
}

void win()
{   
	system("clear");
    std::cout << "\t \t \t \t \t \t \t \t \t \t \t" << "\033[1;32m *           *  ***  *   * \033[0m \n";
    std::cout << "\t \t \t \t \t \t \t \t \t \t \t" << "\033[1;32m  *         *    *   **  * \033[0m \n";
    std::cout << "\t \t \t \t \t \t \t \t \t \t \t" << "\033[1;32m   *   *   *     *   * * * \033[0m \n";
    std::cout << "\t \t \t \t \t \t \t \t \t \t \t" << "\033[1;32m    * * * *      *   *  ** \033[0m \n";
    std::cout << "\t \t \t \t \t \t \t \t \t \t \t" << "\033[1;32m     *   *      ***  *   * \033[0m \n \n";
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t" << "\033[1;32m" << " SPACE - come back to menu" << "\033[0m\n";
}

void lose()
{
	system("clear");	
    std :: cout << "\t \t \t \t \t \t \t \t \t \t \t" << "\033[1;31m *      ******  *****  *****\033[0m \n";
    std :: cout << "\t \t \t \t \t \t \t \t \t \t \t" << "\033[1;31m *      *    *  *      *      \033[0m \n";
    std :: cout << "\t \t \t \t \t \t \t \t \t \t \t" << "\033[1;31m *      *    *  *****  *****\033[0m \n";
    std :: cout << "\t \t \t \t \t \t \t \t \t \t \t" << "\033[1;31m *      *    *      *  *      \033[0m \n";
    std :: cout << "\t \t \t \t \t \t \t \t \t \t \t" << "\033[1;31m *****  ******  *****  *****\033[0m \n \n";
	std :: cout << "\t \t \t \t \t \t \t \t \t \t \t" << "\033[1;32m" << " SPACE - come back to menu" << "\033[0m\n";
}

void instruction()
{
    system("clear");
	std::cout << "\n \n \n \n \n \n \n \n \n \n";
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Rules of the game \n" << std::endl;
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   z-left \n" << std::endl;
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   x-right \n" << std::endl;
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   c-shoot \n" << std::endl;
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   q-quit \n" << std::endl;
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   " << "\033[1;32m" << "Come back - SPACE" << "\033[0m\n";   	
}

void about()
{
	system("clear");
	std::cout << "\n \n \n \n \n \n \n \n \n \n";
	std::cout << "\t \t \t \t \t \t \t" << "Space Invaders was developed by Japanese designer Tomohiro Nishikado, who spent a year designing the game" << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "and developing the necessary hardware to produce it. The game's inspiration is reported to have come from" << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "varying sources, including an adaptation of the electro-mechanical arcade game Space Monsters released by" << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "Taito in 1972, and a dream about Japanese school children who are waiting for Santa Claus when they are" << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "attacked by invading aliens.Nishikado himself has cited Atari's arcade game Breakout (1976) as his original" << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "inspiration behind the game's concept, wanting to adapt the same sense of achievement and tension from" << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "destroying targets one at a time, combining it with elements of target shooting games.The game uses a similar" << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "layout to that of Breakout but with different game mechanics; rather than bounce a ball to attack static objects," << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "players are given the ability to fire projectiles at moving enemies." << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "Nishikado added several interactive elements that he found lacking in earlier video games, such as the ability" << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "for enemies to react to the player's movement and fire back, and a game over triggered by the enemies killing" << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "the player (either by getting hit or enemies reaching the bottom of the screen) rather than simply a timer " << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "running out. He replaced the timer, typical of arcade games at the time, with descending aliens who" << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "effectively served a similar function, where the closer they came, the less time the player had left. \n" << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "Space Invaders is a fixed shooter in which the player moves a laser cannon horizontally across the bottom" << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "the bottom of the screen and fires at aliens overhead. The aliens begin as two rows of ten that move left" << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "and right as a group,shifting downward each time they reach a screen edge. The goal is to eliminate all of" << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "the aliens by shooting them. While the player has three lives, the game ends immediately if the invaders" << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "reach the bottom of the screen. The aliens attempt to destroy the player's cannon by firing projectiles." << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "The laser cannon is partially protected by stationary defense bunkers which are gradually destroyed from" << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "the top by the aliens and, if the player fires when beneath one, the bottom. \n" << std::endl;
	std::cout << "\t \t \t \t \t \t \t" << "\033[1;32m" << "Come back - SPACE" << "\033[0m\n";
}
