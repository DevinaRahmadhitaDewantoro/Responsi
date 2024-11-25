circle: circle.o
	g++ circle.o -o circle.exe

circle.o: circle.cpp
	g++ -c circle.cpp -o circle.o

run: circle
	./circle.exe

circleTest: circleTest.o
	g++ circleTest.o -o circleTest.exe

circleTest.o: circleTest.cpp
	g++ -c circleTest.cpp -o circleTest.o

test: circleTest
	./circleTest.exe

clean:
	rm -f circle.o circleTest.o circle.exe circleTest.exe

