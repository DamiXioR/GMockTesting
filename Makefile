main:
	g++ MainTest.cpp AnotherClass.cpp ElseClass.cpp TestClass.cpp -lgtest -lgtest_main -lgmock -lpthread
clear:
	rm a.out