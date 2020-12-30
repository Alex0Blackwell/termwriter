all: termwriter

termwriter: termwriter.hpp termwriter.cpp
	g++ -o out -Wall termwriter.cpp

clean:
	rm -r *.o *.gch out
