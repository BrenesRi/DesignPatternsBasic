# Makefile created by Maikol Guzmán Alán
# No modificar este archivo. Se utiliza para el autograde

CXX 			= g++
CPPFLAGS 		= -std=c++11
TEST_SOURCES 	= tst/ExamenParcialTest.cpp
SOURCES 		= src/Alien.cpp src/Armadura.cpp src/Guerrero.cpp src/Humanoide.cpp src/HumanoideManager.cpp src/Policia.cpp src/Predator.cpp src/RoboCop.cpp src/Robot.cpp

all: a.out

a.out:
	$(CXX) $(CPPFLAGS) $(SOURCES) $(TEST_SOURCES)

test: a.out
	./a.out

clean:
	rm a.out