sources=globals.cpp initialization.cpp main.cpp print.cpp input.cpp record.cpp 

src=$(sources:%.cpp=src/%.cpp)
objects=$(src:.cpp=.o)
executable=spaceinvaders.exe 

all : $(src) $(executable)

$(executable) : $(objects)
	g++ $(objects) -g -o $@
 
.cpp.o :
	g++ -c $< -g -o $@

clear :
	rm -f src/*.o *.exe 





