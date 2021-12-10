bin: main.o count_increasing_number.o
	g++ main.o count_increasing_number.o -o bin

main.o: main.cpp
	g++ -c main.cpp

count_increasing_number.o: count_increasing_number.cpp count_increasing_number.h
	g++ -c count_increasing_number.cpp

clean:
	rm -f *.o bin
