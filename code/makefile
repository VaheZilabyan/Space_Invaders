spaceinvaders: main.o input.o print.o globals.o record.o initialization.o
	g++ main.o input.o print.o globals.o record.o initialization.o  -o spaceinvaders


main.o: main.cpp
	g++ -c  main.cpp
input.o: input.cpp input.hpp
	g++ -c  input.cpp
print.o: print.cpp print.hpp
	g++ -c  print.cpp
globals.o: globals.cpp globals.hpp
	g++ -c globals.cpp
record.o:  record.cpp record.hpp
	g++ -c record.cpp
initialization.o:  initialization.cpp initialization.hpp
	g++ -c initialization.cpp
clear: 
	rm *.o spaceinvaders records.txt 





