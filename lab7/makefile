main: main.o genMino.o 
	g++ -o main main.o genMino.o
genMino.o: genMino.cpp genMino.h Mino.cpp Mino.h MinoS.cpp MinoS.h MinoI.cpp MinoI.h MinoL.cpp MinoL.h MinoO.cpp MinoO.h MinoT.cpp MinoT.h
	g++ -c genMino.cpp Mino.cpp MinoS.cpp MinoI.cpp MinoL.cpp MinoO.cpp MinoT.cpp
main.o: main.cpp genMino.h
	g++ -c main.cpp
