circle: circle.o
	g++ circle.o -o circe.exe

circle.o: circle.cpp
	g++ -c circle.cpp -o circle.o

run:
	./circle.exe

circleTest: circleTest.o
	g++ circleTest.o -o circleTest.exe

circleTest.o: circleT.cpp
	g++ -c circleTest.cpp -o circleTest.o

test:
	./circleTest.exe

clean:
	rm -f circle.o circleTest circle.exe circleTest.exe

