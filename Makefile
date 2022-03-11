all: main.o heartRate.o
	g++ -std=c++17 main.o heartRate.o -o main

main.o: main.cpp heartRate.h
	g++ -std=c++17 -c main.cpp

heartRate.o: heartRate.cpp heartRate.h
	g++ -std=c++17  -c heartRate.cpp

clean:
	rm *.o
	rm main
