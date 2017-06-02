all: potato.exe

potato.exe: use.o my.o
	g++ -std=c++14 -Wall -o potato.exe use.o my.o

use.o: use.cpp
	gcc -std=c++14 -Wall -c use.cpp

my.o: my.cpp
	gcc -std=c++14 -Wall -c my.cpp

clean:
	rm my.o use.o potato.exe
