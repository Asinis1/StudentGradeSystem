CXX = g++
CXXFLAGS = -Wall -std=c++11

TARGET = StudentSystem

OBJS = main.o student.o linkedlist.o file.o

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

main.o: main.cpp linkedlist.h file.h
	$(CXX) $(CXXFLAGS) -c main.cpp

student.o: student.cpp student.h
	$(CXX) $(CXXFLAGS) -c student.cpp

linkedlist.o: linkedlist.cpp linkedlist.h student.h
	$(CXX) $(CXXFLAGS) -c linkedlist.cpp

file.o: file.cpp file.h linkedlist.h
	$(CXX) $(CXXFLAGS) -c file.cpp

clean:
	rm -f *.o $(TARGET)
