palindrome: palindrome.o
	g++ palindrome.o -o palindrome.exe

palindrome.o: palindrome.cpp
	g++ -c palindrome.cpp -o palindrome.o

run: palindrome
	./palindrome.exe

palindromeTest: palindromeTest.o
	g++ palindromeTest.o -o palindromeTest.exe

palindromeTest.o: palindromeTest.cpp
	g++ -c palindromeTest.cpp -o palindromeTest.o

test: palindromeTest
	./palindromeTest.exe

clean:
	rm -f palindrome.o palindromeTest.o palindrome.exe palindromeTest.exe
