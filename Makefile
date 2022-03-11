CC = g++

main: main.o heartRate.o
	$(CC) -o main main.o heartRate.o

main.o: main.cpp heartRate.h
	$(CC) -c main.cpp

heartRate.o: heartRate.cpp heartRate.h
	$(CC) -c heartRate.cpp

clean:
	rm *.o
	rm main
