bin: main.o count_increasing_number.o count_increase_sum_of_num.o
	g++ -o bin main.o count_increasing_number.o count_increase_sum_of_num.o

main.o: main.cpp
	g++ -c main.cpp

count_increasing_number.o: count_increasing_number.cpp count_increasing_number.h
	g++ -c count_increasing_number.cpp

count_increase_sum_of_num.o: count_increase_sum_of_num.cpp count_increase_sum_of_num.h
	g++ -c count_increase_sum_of_num.cpp

clean:
	rm -f *.o bin
