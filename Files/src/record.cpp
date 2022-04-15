#include <iostream>
#include <string>
#include <fstream>

#include "../include/print.hpp"
#include "../include/input.hpp"
#include "../include/globals.hpp"

void records_deleted()
{
    name();
	std::cout << "\n \n \n \n \n \n \n \n \n \n";
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Play \n" << std::endl;
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   instruction \n" << std::endl;
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   About \n" << std::endl;
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Records \n" << std::endl;
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   " << "\033[1;32m" << "Reset" << "\033[0m\n \n";
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Quit \n \n" << std::endl;
    std :: cout << "\033[1;31m \t \t \t \t \t \t \t \t \t \t \t \t ALL RECORDS DELETED\033[0m\n";
}

void no_records()
{   
    system("clear");
	name();
	std::cout << "\n \n \n \n \n \n \n \n \n \n";
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Play \n" << std::endl;
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   instruction \n" << std::endl;
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   About \n" << std::endl;
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   " << "\033[1;32m" << "Records" << "\033[0m\n \n";
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Reset \n" << std::endl;
	std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Quit \n \n" << std::endl;
    std::cout << "\033[1;31m \t \t \t \t \t \t \t \t \t \t \t \t   NO RECORDS\033[0m\n";
}

void records()
{
    std::string players_records;
    std::fstream records_file;
    records_file.open("records.txt");
    is_not_empty = false;
    std::cout << "\033[1;31m \t \tRECORDS OF PLAYERS \033[0m\n\n";
    std::cout << "NICKNAME \t \t|" << "\t\033[1;32mWin \033[0m" << "or" << "\033[1;31m lose \033[0m \n";
    std::cout << "_________________________________________________\n";
    while (getline(records_file, players_records))
    { 
        is_not_empty = true;   
        std :: cout << players_records << "\n";
	}    
    if (is_not_empty != true) 
    {
        name();
        no_records();
        cbreak();
    } 
    records_file.close();
}

void delete_records()
{
    std::string players_records;
    std::fstream records_file;
    records_file.open("records.txt");        
    if (deleting_record == false)
    {
        remove("records.txt"); 
        records_deleted(); 
        records_file.close();    
    }
    else
    {
        name();
		std::cout << "\n \n \n \n \n \n \n \n \n \n";
		std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Play \n" << std::endl;
		std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   instruction \n" << std::endl;
		std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   About \n" << std::endl;
		std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Records \n" << std::endl;
		std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   " << "\033[1;32m" << "Reset" << "\033[0m\n \n";
		std::cout << "\t \t \t \t \t \t \t \t \t \t \t \t   Quit \n \n" << std::endl;
		std::cout << "\033[1;31m \t \t \t \t \t \t \t \t \t \t \t \t NOTHING TO DELETE\033[0m\n";	
    }
}