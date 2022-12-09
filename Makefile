Exception_prac.o : Exception_prac.cpp Exception_prac.hpp
		g++ -c -O Exception_prac.cpp

exception_prac.o : exception_prac.cpp  Exception_prac.hpp
		g++ -c -O exception_prac.cpp

exception_prac : Exception_prac.o exception_prac.o
		g++ -O -o exception_prac Exception_prac.o exception_prac.o
